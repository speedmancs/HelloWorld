#pragma once
#include <vector>
#include "MatrixFactor.h"
namespace HelloWorld
{
    class Matrix : public MatrixFactor
    {
    public:
        Matrix(std::initializer_list<std::vector<float>> l);
        Matrix(const MatrixFactor& other);
        virtual void Assign(Matrix& output) const;
        virtual void Add(Matrix& output) const;
        virtual void Sub(Matrix& output) const;
        virtual int Row() const;
        virtual int Col() const;
        virtual float GetValue(int row, int col) const;

        void Print();
        Matrix& operator = (const Matrix& other);
        Matrix& operator += (const Matrix& other);
        Matrix& operator -= (const Matrix& other);
        Matrix& operator = (const MatrixFactor& other);
        Matrix& operator += (const MatrixFactor& other);
        Matrix& operator -= (const MatrixFactor& other);
        Matrix& operator - ();
        Matrix& operator += (float value);
        Matrix& operator -= (float value);
        Matrix& operator *= (float value);

    private:
        std::vector<std::vector<float>> data;
    };
}