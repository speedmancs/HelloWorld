#include "Vector.h"
#include "VecScalarMul.h"
namespace HelloWorld
{
    VecScalarMul::VecScalarMul(float _value, VectorFactor& _right) : right(_right), value(_value) {}
    void VecScalarMul::Assign(Vector& output) const
    {
        right.Assign(output);
        output *= value;
    }

    void VecScalarMul::Add(Vector& output) const
    {
        output += *this;
    }

    void VecScalarMul::Sub(Vector& output) const
    {
        output -= *this;
    }

    int VecScalarMul::Size() const
    {
        return right.Size();
    }

    float VecScalarMul::GetValue(int index) const
    {
        return right.GetValue(index) * value;
    }
}
