#include "VecAdd.h"
namespace HelloWorld
{
    VecAdd::VecAdd(VectorFactor& _left, VectorFactor & _right) : left(_left), right(_right) {}
    void VecAdd::Assign(Vector& output) const
    {
        left.Assign(output);
        right.Add(output);
    }

    void VecAdd::Add(Vector& output) const
    {
        left.Add(output);
        right.Add(output);
    }

    void VecAdd::Sub(Vector& output) const
    {
        left.Sub(output);
        right.Sub(output);
    }

    int VecAdd::Size() const
    {
        return left.Size();
    }

    float VecAdd::GetValue(int index) const
    {
        return left.GetValue(index) + right.GetValue(index);
    }
}
