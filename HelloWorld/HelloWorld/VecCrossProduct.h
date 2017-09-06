#pragma once
#include "MatrixFactor.h"
namespace HelloWorld
{
    class VectorFactor;
    class VecCP : public MatrixFactor
    {
    public:
        VecCP(VectorFactor& _left, VectorFactor& _right);
        virtual void Assign(Matrix& output) const;
        virtual void Add(Matrix& output) const;
        virtual void Sub(Matrix& output) const;
        virtual int Row() const;
        virtual int Col() const;
        virtual float GetValue(int row, int col) const;

    private:
        VectorFactor& left;
        VectorFactor& right;
    };
}
