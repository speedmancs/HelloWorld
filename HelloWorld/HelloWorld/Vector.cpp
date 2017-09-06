#include <vector>
#include <iostream>
#include "VectorFactor.h"
#include "Vector.h"
namespace HelloWorld
{
    Vector::Vector(const VectorFactor& other)
    {
        other.Assign(*this);
    }
    
    Vector::Vector(std::initializer_list<float> l) : data(l) {}

    void Vector::Print()
    {
        for (int i = 0; i < Size(); i++)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    Vector& Vector::operator = (const VectorFactor& other)
    {
        std::cout << "Vector::operator = VectorFactor" << std::endl;
        for (int i = 0; i < Size(); i++)
            data[i] = other.GetValue(i);
        return *this;
    }

    Vector& Vector::operator = (const Vector& other)
    {
        std::cout << "Vector::operator = Vector" << std::endl;
        data = other.data;
        return *this;
    }

    void Vector::operator += (const VectorFactor& other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] += other.GetValue(i);
    }

    void Vector::operator -= (const VectorFactor& other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] -= other.GetValue(i);
    }

    void Vector::operator *= (const VectorFactor& other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] *= other.GetValue(i);
    }

    void Vector::operator *= (float other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] *= other;
    }

    void Vector::operator += (float other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] += other;
    }

    void Vector::operator -= (float other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] -= other;
    }

    void Vector::operator *= (const Vector& other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] *= other.data[i];
    }

    void Vector::operator += (const Vector& other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] += other.data[i];
    }

    void Vector::operator -= (const Vector& other)
    {
        for (int i = 0; i < Size(); i++)
            data[i] -= other.data[i];
    }

    int Vector::Size() const
    {
        return data.size();
    }

    void Vector::Assign(Vector& output) const
    {
        output.data = data;
    }

    void Vector::Add(Vector& output) const
    {
        output += *this;
    }

    void Vector::Sub(Vector& output) const
    {
        output -= *this;
    }

    float Vector::GetValue(int index) const
    {
        return data[index];
    }
}
