// Fill out your copyright notice in the Description page of Project Settings.


#include "BezierCurve.h"
#include "Math/UnrealMathUtility.h"

BezierCurve::BezierCurve()
{
}

BezierCurve::~BezierCurve()
{
}

FVector BezierCurve::QuadraticBezierCurves(float time, FVector Position0, FVector Position1, FVector Position2)
{
	//output vector
	FVector output;

	//calculate the point on the bezier curve at the specific time
	output = (FMath::Square(1 - time) * Position0) + (2 * (1 - time) * time * Position1) + (FMath::Square(time) * Position2);

	return output;
}