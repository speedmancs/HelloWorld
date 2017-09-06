#pragma once
#include "VecAdd.h"
#include "VecSub.h"
#include "VecMul.h"
#include "VecScalarAdd.h"
#include "VecScalarSub.h"
#include "VecScalarMul.h"
#include "MatAdd.h"
#include "MatVec.h"
#include "MatAdd.h"
#include "MatSub.h"
#include "MatScalarAdd.h"
#include "MatScalarSub.h"
#include "MatScalarMul.h"
#include "VecCrossProduct.h"
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
    MatVec operator * (MatrixFactor& left, VectorFactor& right);
    VecCP CP(VectorFactor& left, VectorFactor& right);
    MatAdd operator + (MatrixFactor& left, MatrixFactor& right);
    MatSub operator - (MatrixFactor& left, MatrixFactor& right);
    MatScalarAdd operator + (MatrixFactor& left, float value);
    MatScalarAdd operator + (float value, MatrixFactor& right);
    MatScalarSub operator - (MatrixFactor& left, float value);
    MatScalarSub operator - (float value, MatrixFactor& right);
    MatScalarMul operator * (float value, MatrixFactor& right);
    MatScalarMul operator * (MatrixFactor& left, float value);
}
