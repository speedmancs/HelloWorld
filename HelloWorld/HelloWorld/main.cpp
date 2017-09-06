#include <iostream>
#include "MathUtil.h"
#include "Vector.h"
#include "Matrix.h"
using namespace HelloWorld;
int main(int argc, char** argv)
{
    Vector a = { 1, 2 };
    Vector b = { 3, 4 };
    Vector c = { 5, 6 };
    Matrix m = { { 1, 2 },{ 3, 4 } };
    Matrix n = { { 1, 1},{ 1, 1}};

    //Vector v = a + (b - c);
    //v.Print();
    //
    //Vector v2 = 0.3f * a + 0.2f * b + c;
    //v2.Print();

    //Vector v = a * b + 4 * c * a * b + m * a;
    //v.Print();

    //Matrix y = m - n + 2.0f * CP(a, b);
    //y.Print();

    Vector v = a * b;
    v.Print();
    return 0;
}