#pragma once
namespace HelloWorld
{
    class Matrix;
    class MatrixFactor
    {
    public:
        // output = *this
        virtual void Assign(Matrix& output) const = 0;
        // output = output + *this
        virtual void Add(Matrix& output) const = 0;
        // output = output - *this
        virtual void Sub(Matrix& output) const = 0;

        virtual int Row() const = 0;
        virtual int Col() const = 0;
        virtual float GetValue(int row, int col) const = 0;
    };
}