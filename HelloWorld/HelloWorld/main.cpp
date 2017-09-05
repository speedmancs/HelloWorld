#include <iostream>
#include "MathUtil.h"
#include "Vector.h"
using namespace HelloWorld;
int main(int argc, char** argv)
{
    Vector a = { 1, 2, 3 };
    Vector b = { 4, 5, 6 };
    Vector c = { 7, 8, 9 };
    Vector y = a + (b - c);
    y.Print();

    Vector z = 0.3f * a + 0.2f * b + c;
    z.Print();

    z = a * b + 4 * c * a * b;
    z.Print();
    z = a;
    z.Print();
    return 0;
}