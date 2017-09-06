#include "MatAdd.h"
#include "Matrix.h"
namespace HelloWorld
{
    MatAdd::MatAdd(MatrixFactor& _left, MatrixFactor& _right): left(_left), right(_right) {}
    int MatAdd::Row() const
    {
        return left.Row();
    }

    int MatAdd::Col() const
    {
        return left.Col();
    }

    void MatAdd::Assign(Matrix& output) const
    {
        output = left;
        output += right;
    }

    void MatAdd::Add(Matrix& output) const
    {
        output += left;
        output += right;
    }

    void MatAdd::Sub(Matrix& output) const
    {
        output -= left;
        output -= right;
    }

    float MatAdd::GetValue(int row, int col) const
    {
        return left.GetValue(row, col) + right.GetValue(row, col);
    }
}