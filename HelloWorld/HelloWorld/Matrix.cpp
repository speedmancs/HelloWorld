#include "Matrix.h"
#include <iostream>
namespace HelloWorld
{
    Matrix::Matrix(std::initializer_list<std::vector<float>> l) :data(l) {}

    Matrix::Matrix(const MatrixFactor& other)
    {
        data.resize(other.Row());
        for (int i = 0; i < other.Row(); i++)
            data[i].resize(other.Col());
        other.Assign(*this);
    }

    int Matrix::Row() const
    {
        return data.size();
    }

    int Matrix::Col() const
    {
        if (Row() == 0)
            return 0;

        return data[0].size();
    }

    void Matrix::Assign(Matrix& output) const
    {
        output = *this;
    }

    void Matrix::Add(Matrix& output) const
    {
        output += *this;
    }

    void Matrix::Sub(Matrix& output) const
    {
        output -= *this;
    }

    float Matrix::GetValue(int row, int col) const
    {
        return data[row][col];
    }

    Matrix& Matrix::operator = (const Matrix& other)
    {
        this->data = other.data;
        return *this;
    }

    Matrix& Matrix::operator += (const Matrix& other)
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] += other.data[i][j];
            }
        }

        return *this;
    }

    Matrix& Matrix::operator -= (const Matrix& other)
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] -= other.data[i][j];
            }
        }

        return *this;
    }
    Matrix& Matrix::operator = (const MatrixFactor& other)
    {
        for (int i = 0; i < Row(); i++)
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] = other.GetValue(i, j);
            }
        return *this;
    }

    Matrix& Matrix::operator += (const MatrixFactor& other)
    {
        for (int i = 0; i < Row(); i++)
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] += other.GetValue(i, j);
            }
        return *this;
    }

    Matrix& Matrix::operator -= (const MatrixFactor& other)
    {
        for (int i = 0; i < Row(); i++)
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] -= other.GetValue(i, j);
            }
        return *this;
    }

    Matrix& Matrix::operator - ()
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] = -data[i][j];
            }
        }

        return *this;
    }

    Matrix& Matrix::operator += (float value)
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] += value;
            }
        }

        return *this;
    }

    Matrix& Matrix::operator -= (float value)
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] -= value;
            }
        }

        return *this;
    }

    Matrix& Matrix::operator *= (float value)
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                data[i][j] *= value;
            }
        }

        return *this;
    }

    void Matrix::Print()
    {
        for (int i = 0; i < Row(); i++)
        {
            for (int j = 0; j < Col(); j++)
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
}