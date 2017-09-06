#include "MatScalarAdd.h"
#include "Matrix.h"
namespace HelloWorld
{
    MatScalarAdd::MatScalarAdd(MatrixFactor& _mat, float _val) : mat(_mat), value(_val) { }

    int MatScalarAdd::Row() const
    {
        return mat.Row();
    }

    int MatScalarAdd::Col() const
    {
        return mat.Col();
    }

    float MatScalarAdd::GetValue(int row, int col) const
    {
        return mat.GetValue(row, col) + value;
    }

    void MatScalarAdd::Add(Matrix& output) const
    {
        output += mat;
        output += value;
    }

    void MatScalarAdd::Sub(Matrix& output) const
    {
        output -= mat;
        output -= value;
    }

    void MatScalarAdd::Assign(Matrix& output) const
    {
        output = mat;
        output += value;
    }
}