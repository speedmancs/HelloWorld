#include "VecScalarAdd.h"
#include "Vector.h"
namespace HelloWorld
{
    VecScalarAdd::VecScalarAdd(VectorFactor& _left, float _value) : left(_left), value(_value) {}
    void VecScalarAdd::Assign(Vector& output) const
    {
        left.Assign(output);
        output += value;
    }

    void VecScalarAdd::Add(Vector& output) const
    {
        left.Add(output);
        output += value;
    }

    void VecScalarAdd::Sub(Vector& output) const
    {
        left.Sub(output);
        output -= value;
    }

    int VecScalarAdd::Size() const
    {
        return left.Size();
    }
    float VecScalarAdd::GetValue(int index) const
    {
        return left.GetValue(index) + value;
    }
}
