#pragma once
#include "VectorFactor.h"
namespace HelloWorld
{
    class VecScalarMul : public VectorFactor
    {
    public:
        VecScalarMul(float _value, VectorFactor& _right);
        virtual void Assign(Vector& output) const;
        virtual void Add(Vector& output) const;
        virtual void Sub(Vector& output) const;
        virtual int Size() const;
        virtual float GetValue(int index) const;
    private:
        float value;
        VectorFactor& right;
    };
}
