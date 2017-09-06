#pragma once
#include "MatrixFactor.h"
namespace HelloWorld
{
    class MatAdd : public MatrixFactor 
    {
    public:
        MatAdd(MatrixFactor& _left, MatrixFactor& _right);
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
