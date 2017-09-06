#pragma once
#include "MatrixFactor.h"
namespace HelloWorld
{
    class MatScalarMul : public MatrixFactor
    {
    public:
        MatScalarMul(MatrixFactor& _mat, float _val);
        virtual void Assign(Matrix& output) const;
        virtual void Add(Matrix& output) const;
        virtual void Sub(Matrix& output) const;
        virtual int Row() const;
        virtual int Col() const;
        virtual float GetValue(int row, int col) const;

    private:
        MatrixFactor& mat;
        float value;
    };
}
