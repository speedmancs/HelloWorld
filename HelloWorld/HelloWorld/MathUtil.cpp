#include "MathUtil.h"
namespace HelloWorld
{
    VecAdd operator + (VectorFactor& left, VectorFactor& right)
    {
        return VecAdd(left, right);
    }

    VecSub operator - (VectorFactor& left, VectorFactor& right)
    {
        return VecSub(left, right);
    }

    VecScalarAdd operator + (VectorFactor& left, float value)
    {
        return VecScalarAdd(left, value);
    }

    VecScalarAdd operator + (float value, VectorFactor& right)
    {
        return VecScalarAdd(right, value);
    }

    VecScalarSub operator - (VectorFactor& left, float value)
    {
        return VecScalarSub(left, value);
    }

    VecScalarSub operator - (float value, VectorFactor& right)
    {
        return VecScalarSub(right, value);
    }

    VecScalarMul operator * (float value, VectorFactor& right)
    {
        return VecScalarMul(value, right);
    }

    VecScalarMul operator * (VectorFactor& left, float value)
    {
        return VecScalarMul(value, left);
    }

    VecMul operator * (VectorFactor& left, VectorFactor& right)
    {
        return VecMul(left, right);
    }
}