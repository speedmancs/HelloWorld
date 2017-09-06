#include "VecCrossProduct.h"
#include "Matrix.h"
#include "VectorFactor.h"
namespace HelloWorld
{
    VecCP::VecCP(VectorFactor& _left, VectorFactor& _right) : left(_left), right(_right) { }
    int VecCP::Row() const
    {
        return left.Size();
    }

    int VecCP::Col() const
    {
        return right.Size();
    }

    float VecCP::GetValue(int row, int col) const
    {
        return left.GetValue(row) * right.GetValue(col);
    }

    void VecCP::Add(Matrix& output) const
    {
        output += *this;
    }

    void VecCP::Sub(Matrix& output) const
    {
        output -= *this;
    }

    void VecCP::Assign(Matrix& output) const
    {
        output = *this;
    }
}