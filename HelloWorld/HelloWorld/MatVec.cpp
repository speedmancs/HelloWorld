#include "MatVec.h"
#include "Vector.h"
#include "Matrix.h"
namespace HelloWorld
{
    MatVec::MatVec(MatrixFactor& _mat, VectorFactor& _vec) : mat(_mat), vec(_vec) {}
    void MatVec::Assign(Vector& output) const
    {
        output = *this;
    }

    void MatVec::Add(Vector& output) const
    {
        output += *this;        
    }

    void MatVec::Sub(Vector& output) const
    {
        output -= *this;
    }

    int MatVec::Size() const
    {
        return mat.Row();
    }

    float MatVec::GetValue(int index) const
    {
        float sum = 0;
        for (int i = 0; i < mat.Col(); i++)
        {
            sum += mat.GetValue(index, i) * vec.GetValue(i);
        }

        return sum;
    }
}
