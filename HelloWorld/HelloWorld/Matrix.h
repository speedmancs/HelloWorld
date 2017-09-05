#pragma once
#include <vector>
namespace HelloWorld
{
    class Matrix
    {
    public:
        Matrix(std::initializer_list<std::vector<float>> l);
        int Row() const;
        int Col() const;
        void Print();
    private:
        std::vector<std::vector<float>> data;
    };
}