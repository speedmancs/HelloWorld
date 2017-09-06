#pragma once
#include "MatrixFactor.h"
namespace HelloWorld
{
    class MatSub : public MatrixFactor
    {
    public:
        MatSub(MatrixFactor& _left, MatrixFactor& _right);
        virtual void Assign(Matrix& output) const;
        virtual void Add(Matrix& output) const;
        virtual void Sub(Matrix& output) const;
        virtual int Row() const;
        virtual int Col() const;
        virtual float GetValue(int row, int col) const;
    private:
        MatrixFactor& left;
        MatrixFactor& right;
    };
}
