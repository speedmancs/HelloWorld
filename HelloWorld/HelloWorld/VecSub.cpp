#include "VecSub.h"
namespace HelloWorld
{
    VecSub::VecSub(VectorFactor& _left, VectorFactor& _right) : left(_left), right(_right)
    {

    }
    void VecSub::Assign(Vector& output) const
    {
        left.Assign(output);
        right.Sub(output);
    }

    void VecSub::Add(Vector& output) const
    {
        left.Add(output);
        right.Sub(output);
    }

    void VecSub::Sub(Vector& output) const
    {
        left.Sub(output);
        right.Add(output);
    }

    int VecSub::Size() const
    {
        return left.Size();
    }

    float VecSub::GetValue(int index) const
    {
        return left.GetValue(index) - right.GetValue(index);
    }
}