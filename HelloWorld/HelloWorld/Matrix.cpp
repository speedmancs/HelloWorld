#include "Matrix.h"
#include <iostream>
namespace HelloWorld
{
    Matrix::Matrix(std::initializer_list<std::vector<float>> l) :data(l) {}
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