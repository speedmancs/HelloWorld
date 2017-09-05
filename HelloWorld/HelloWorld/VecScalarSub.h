#pragma once
#include "VectorFactor.h"
namespace HelloWorld
{
    class VecScalarSub : public VectorFactor
    {
    public:
        VecScalarSub(VectorFactor& _left, float _value);
        virtual void Assign(Vector& output) const;
        virtual void Add(Vector& output) const;
        virtual void Sub(Vector& output) const;
        virtual int Size() const;
        virtual float GetValue(int index) const;
    private:
        VectorFactor& left;
        float value;
    };
}
