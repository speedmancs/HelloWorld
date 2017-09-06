#pragma once
#include "VectorFactor.h"
namespace HelloWorld
{
    class MatrixFactor;
    class MatVec : public VectorFactor
    {
    public:
        MatVec(MatrixFactor& _mat, VectorFactor& _vec);
        virtual void Assign(Vector& output) const;
        virtual void Add(Vector& output) const;
        virtual void Sub(Vector& output) const;
        virtual int Size() const;
        virtual float GetValue(int index) const;
    private:
        MatrixFactor& mat;
        VectorFactor& vec;
    };


}
