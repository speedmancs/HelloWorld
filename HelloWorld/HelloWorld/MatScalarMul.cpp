#include "MatScalarMul.h"
#include "Matrix.h"
namespace HelloWorld
{
    MatScalarMul::MatScalarMul(MatrixFactor& _mat, float _val) : mat(_mat), value(_val) { }

    int MatScalarMul::Row() const
    {
        return mat.Row();
    }

    int MatScalarMul::Col() const
    {
        return mat.Col();
    }

    float MatScalarMul::GetValue(int row, int col) const
    {
        return mat.GetValue(row, col) * value;
    }

    void MatScalarMul::Add(Matrix& output) const
    {
        output += *this;
    }

    void MatScalarMul::Sub(Matrix& output) const
    {
        output -= *this;
    }

    void MatScalarMul::Assign(Matrix& output) const
    {
        output = *this;
    }
}