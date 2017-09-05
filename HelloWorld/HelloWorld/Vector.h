#pragma once
#include <vector>
#include "VectorFactor.h"
namespace HelloWorld
{
    class Vector : public VectorFactor
    {
    public:
        Vector(const VectorFactor& other);
        Vector(std::initializer_list<float> l);
        virtual void Assign(Vector& output) const;
        virtual void Add(Vector& output) const;
        virtual void Sub(Vector& output) const;
        virtual int Size() const;
        virtual float GetValue(int index) const;

        void Print();
        void operator += (const VectorFactor& other);
        void operator -= (const VectorFactor& other);
        void operator *= (const VectorFactor& other);
        void operator += (const Vector& other);
        void operator -= (const Vector& other);
        void operator *= (const Vector& other);
        void operator += (float other);
        void operator -= (float other);
        void operator *= (float other);
        Vector& operator = (const VectorFactor& other);
        Vector& operator = (const Vector& other);
    private:
        std::vector<float> data;
    };
}
