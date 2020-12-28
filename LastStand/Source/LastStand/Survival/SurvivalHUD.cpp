// Fill out your copyright notice in the Description page of Project Settings.

#include "SurvivalHUD.h"

#include "Units/UnitSelectable.h"
#include "Units/Squad.h"

void ASurvivalHUD::DrawHUD()
{
	if (m_bCtrlClickSelectionUpdate)
	{
		m_bCtrlClickSelectionUpdate = false;
		TArray<AUnitSelectable*> _liBufferList;
		GetActorsInSelectionRectangle<AUnitSelectable>(m_vInitialSelectionPoint, m_vInitialSelectionPoint, _liBufferList, false, false);

		if (_liBufferList.Num() > 0)
		{
			if (FindUnitInArray(m_liCurrentSquadsSelection, _liBufferList[0]))
			{
				_liBufferList[0]->m_pSquadParent->setDeselected();
				m_liCurrentSquadsSelection.Remove(_liBufferList[0]->m_pSquadParent);
			}
			else
			{
				_liBufferList[0]->m_pSquadParent->setSelected();
				m_liCurrentSquadsSelection.Emplace(_liBufferList[0]->m_pSquadParent);
			}
		}
	}

	else if (m_bSelecting)
	{
		if (m_liCurrentSquadsSelection.Num() > 0)
		{
			for (int32 i = 0; i < m_liCurrentSquadsSelection.Num(); i++)
			{
				m_liCurrentSquadsSelection[i]->setDeselected();
			}
		}
		m_liCurrentSquadsSelection.Empty();

		m_liCurrentActorSelection.Empty();


		m_vCurrentSelectionPoint = getMousePos2D();
		DrawRect(FLinearColor(0, 0, 1, 0.15f),
			m_vInitialSelectionPoint.X, m_vInitialSelectionPoint.Y,
			m_vCurrentSelectionPoint.X - m_vInitialSelectionPoint.X,
			m_vCurrentSelectionPoint.Y - m_vInitialSelectionPoint.Y);
		GetActorsInSelectionRectangle<AUnitSelectable>(m_vInitialSelectionPoint, m_vCurrentSelectionPoint, m_liCurrentActorSelection, false, false);

		if (m_liCurrentActorSelection.Num() > 0)
		{
			for (int32 i = 0; i < m_liCurrentActorSelection.Num(); i++)
			{
				AddUnit(m_liCurrentActorSelection[i]);
			}
		}

		for (int32 i = 0; i < m_liCurrentSquadsSelection.Num(); i++)
		{
			m_liCurrentSquadsSelection[i]->setSelected();
		}
	}
}

bool ASurvivalHUD::FindUnitInArray(TArray<ASquad*> _array, AUnitSelectable* _unitToSearch)
{
	if (_array.Num() <= 0)
		return false;

	for (int32 i = 0; i < _array.Num(); i++)
	{
		if (_array[i] == _unitToSearch->m_pSquadParent)
			return true;
	}
	return false;
}

FVector2D ASurvivalHUD::getMousePos2D()
{
	APlayerController* _psCont = GetOwningPlayerController();
	if (!_psCont)
		return FVector2D::ZeroVector;

	float _fPosX;
	float _fPosY;

	_psCont->GetMousePosition(_fPosX, _fPosY);

	return FVector2D(_fPosX, _fPosY);
}

void ASurvivalHUD::AddUnit(AUnitSelectable* _unit)
{
	if (!FindUnitInArray(m_liCurrentSquadsSelection, _unit))
		m_liCurrentSquadsSelection.Emplace(_unit->m_pSquadParent);
}