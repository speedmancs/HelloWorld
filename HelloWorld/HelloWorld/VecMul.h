#pragma once
#include "VectorFactor.h"
namespace HelloWorld
{
    class VecMul : public VectorFactor
    {
    public:
        VecMul(VectorFactor& _left, VectorFactor & _right);
        virtual void Assign(Vector& output) const;
        virtual void Add(Vector& output) const;
        virtual void Sub(Vector& output) const;
        virtual int Size() const;
        virtual float GetValue(int index) const;
    private:
        VectorFactor& left;
        VectorFactor& right;
    };
}
#pragma once
