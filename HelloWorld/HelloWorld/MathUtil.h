#pragma once
#include "VecAdd.h"
#include "VecSub.h"
#include "VecMul.h"
#include "VecScalarAdd.h"
#include "VecScalarSub.h"
#include "VecScalarMul.h"
namespace HelloWorld
{
    VecAdd operator + (VectorFactor& left, VectorFactor& right);
    VecSub operator - (VectorFactor& left, VectorFactor& right);
    VecScalarAdd operator + (VectorFactor& left, float value);
    VecScalarAdd operator + (float value, VectorFactor& right);
    VecScalarSub operator - (VectorFactor& left, float value);
    VecScalarSub operator - (float value, VectorFactor& right);
    VecScalarMul operator * (float value, VectorFactor& right);
    VecScalarMul operator * (VectorFactor& left, float value);
    VecMul operator * (VectorFactor& left, VectorFactor& right);
}
