// Fill out your copyright notice in the Description page of Project Settings.

#include "SurvivalHUD.h"

#include "Units/UnitSelectable.h"

void ASurvivalHUD::DrawHUD()
{
	if (m_bCtrlClickSelectionUpdate)
	{
		m_bCtrlClickSelectionUpdate = false;
		TArray<AUnitSelectable*> _liBufferList;
		GetActorsInSelectionRectangle<AUnitSelectable>(m_vInitialSelectionPoint, m_vInitialSelectionPoint, _liBufferList, false, false);

		if (_liBufferList.Num() > 0)
		{
			if (FindUnitInArray(m_liCurrentActorSelection, _liBufferList[0]))
			{
				_liBufferList[0]->setDeselected();
				m_liCurrentActorSelection.Remove(_liBufferList[0]);
			}
			else
			{
				_liBufferList[0]->setSelected();
				m_liCurrentActorSelection.Emplace(_liBufferList[0]);
			}
		}
	}

	else if (m_bSelecting)
	{
		if (m_liCurrentActorSelection.Num() > 0)
		{
			for (int32 i = 0; i < m_liCurrentActorSelection.Num(); i++)
			{
				m_liCurrentActorSelection[i]->setDeselected();
			}
		}
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
				m_liCurrentActorSelection[i]->setSelected();
			}
		}
	}
}

bool ASurvivalHUD::FindUnitInArray(TArray<AUnitSelectable*> _array, AUnitSelectable* _unitToSearch)
{
	if (_array.Num() <= 0)
		return false;

	for (int32 i = 0; i < _array.Num(); i++)
	{
		if (_array[i] == _unitToSearch)
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