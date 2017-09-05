#pragma once
namespace HelloWorld
{
    class Vector;
    class VectorFactor
    {
    public:
        // output = *this
        virtual void Assign(Vector& output) const = 0;
        // output = output + *this
        virtual void Add(Vector& output) const = 0;
        // output = output - *this
        virtual void Sub(Vector& output) const = 0;
        
        virtual int Size() const = 0;
        virtual float GetValue(int index) const = 0;
    };
}
