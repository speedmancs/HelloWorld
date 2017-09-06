#include "MatScalarSub.h"
#include "Matrix.h"
namespace HelloWorld
{
    MatScalarSub::MatScalarSub(MatrixFactor& _mat, float _val) : mat(_mat), value(_val) { }

    int MatScalarSub::Row() const
    {
        return mat.Row();
    }

    int MatScalarSub::Col() const
    {
        return mat.Col();
    }

    float MatScalarSub::GetValue(int row, int col) const
    {
        return mat.GetValue(row, col) - value;
    }

    void MatScalarSub::Add(Matrix& output) const
    {
        output += mat;
        output -= value;
    }

    void MatScalarSub::Sub(Matrix& output) const
    {
        output -= mat;
        output += value;
    }

    void MatScalarSub::Assign(Matrix& output) const
    {
        output = mat;
        output -= value;
    }
}