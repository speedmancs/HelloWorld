#include "MatSub.h"
#include "Matrix.h"
namespace HelloWorld
{
    MatSub::MatSub(MatrixFactor& _left, MatrixFactor& _right) : left(_left), right(_right) {}
    int MatSub::Row() const
    {
        return left.Row();
    }

    int MatSub::Col() const
    {
        return left.Col();
    }

    void MatSub::Assign(Matrix& output) const
    {
        output = left;
        output -= right;
    }

    void MatSub::Add(Matrix& output) const
    {
        output += left;
        output -= right;
    }

    void MatSub::Sub(Matrix& output) const
    {
        output -= left;
        output += right;
    }

    float MatSub::GetValue(int row, int col) const
    {
        return left.GetValue(row, col) - right.GetValue(row, col);
    }
}