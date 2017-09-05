#include "VecMul.h"
#include "Vector.h"
namespace HelloWorld
{
    VecMul::VecMul(VectorFactor& _left, VectorFactor& _right) : left(_left), right(_right) {}

    void VecMul::Assign(Vector& output) const
    {
        left.Assign(output);
        output *= right;
    }

    void VecMul::Add(Vector& output) const
    {
        output += *this;
    }

    void VecMul::Sub(Vector& output) const
    {
        output -= *this;
    }

    int VecMul::Size() const
    {
        return left.Size();
    }

    float VecMul::GetValue(int index) const
    {
        return left.GetValue(index) * right.GetValue(index);
    }
}