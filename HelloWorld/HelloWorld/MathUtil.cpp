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
        // todo value - right
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

    MatVec operator * (MatrixFactor& left, VectorFactor& right)
    {
        return MatVec(left, right);
    }

    VecCP CP(VectorFactor& left, VectorFactor& right)
    {
        return VecCP(left, right);
    }

    MatAdd operator + (MatrixFactor& left, MatrixFactor& right)
    {
        return MatAdd(left, right);
    }

    MatSub operator - (MatrixFactor& left, MatrixFactor& right)
    {
        return MatSub(left, right);
    }

    MatScalarAdd operator + (MatrixFactor& left, float value)
    {
        return MatScalarAdd(left, value);
    }

    MatScalarAdd operator + (float value, MatrixFactor& right)
    {
        return MatScalarAdd(right, value);
    }

    MatScalarSub operator - (MatrixFactor& left, float value)
    {
        return MatScalarSub(left, value);
    }

    MatScalarSub operator - (float value, MatrixFactor& right)
    {
        // todo
        return MatScalarSub(right, value);
    }

    MatScalarMul operator * (float value, MatrixFactor& right)
    {
        return MatScalarMul(right, value);
    }

    MatScalarMul operator * (MatrixFactor& left, float value)
    {
        return MatScalarMul(left, value);
    }
}