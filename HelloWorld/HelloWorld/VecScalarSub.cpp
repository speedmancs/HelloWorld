#include "Vector.h"
#include "VecScalarSub.h"
namespace HelloWorld
{
    VecScalarSub::VecScalarSub(VectorFactor& _left, float _value) : left(_left), value(_value) {}
    void VecScalarSub::Assign(Vector& output) const
    {
        left.Assign(output);
        output -= value;
    }

    void VecScalarSub::Add(Vector& output) const
    {
        left.Add(output);
        output -= value;
    }

    void VecScalarSub::Sub(Vector& output) const
    {
        left.Sub(output);
        output += value;
    }

    int VecScalarSub::Size() const
    {
        return left.Size();
    }

    float VecScalarSub::GetValue(int index) const
    {
        return left.GetValue(index) - value;
    }
}
