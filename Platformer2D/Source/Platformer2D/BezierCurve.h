// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class PLATFORMER2D_API BezierCurve
{
public:
	BezierCurve();
	~BezierCurve();

	//output for quadratic bezier curves
	FVector QuadraticBezierCurves(float time, FVector Position0, FVector Position1, FVector Position2);

};
