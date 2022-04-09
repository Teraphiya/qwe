#include <iostream>
#include <stdio.h>
#include <math.h>
#include "3.ComplexDigit.h"
#include "3.Array.h"

int main()
{
    /// ComplexDigit check
    ComplexDigit сd1(2, 3);
    ComplexDigit cd2(1, 1);

    /// (2 + 3i)*(1 + 1i)=2 + 5i - 3 = -1 + 5i
    ComplexDigit cd3 = cd1 + cd2;
    std::cout << "Sum:" << std::endl;
    cd3.display();
    std::cout << "Prod:" << std::endl;
    cd3 = cd1 * cd2;
    cd3.display();

    double f2 = (double)cd3;
    std::cout << "Complex len (double) operator = " << f2 << std::endl;

    cd3 = cd1 * 2.5;
    cd3.display();



    /// Array check
    Array arr1(4);
    Array arr2(3);

    arr1.display();
    arr2.display();

    bool b1 = arr1 > arr2;
    bool b2 = arr1 < arr2;
    bool b3 = arr1 == arr2;
    bool b4 = arr1 != arr2;

    printf("B1 = %d\nB2 = %d\nB3 = %d\nB4 = %d\n", b1, b2, b3, b4);

    Array arr3 = arr1 + arr2;
    std::cout << arr3.getSize() << std::endl;
    arr3.display();

    return 0;
}

/**
class ComplexDigit
{
private:
    int realPart;
    int phantomPart;
public:
    ComplexDigit(int realPart, int phantomPart)
    {
        this->realPart = realPart;
        this->phantomPart = phantomPart;
    }
    ComplexDigit()
    {
        this->realPart = 0;
        this->phantomPart = 0;
    }

    ComplexDigit operator + (ComplexDigit d)
    {
        return ComplexDigit(this->realPart + d.realPart, this->phantomPart + d.phantomPart);
    }
    /// (2 + 3i)*(-4 * 1i)
    ComplexDigit operator * (ComplexDigit d)
    {
        return ComplexDigit(this->realPart * d.realPart - this->phantomPart * d.phantomPart,
                            this->realPart * d.phantomPart + this->phantomPart * d.realPart);
    }
    ComplexDigit operator * (float c)
    {
        return ComplexDigit(this->realPart * c, this->phantomPart * c);
    }
    operator double() const
    {
        return sqrt(this->realPart * this->realPart * 1.0 +
                    this->phantomPart * this->phantomPart * 1.0);
    }

    void display()
    {
        if (this->phantomPart >= 0)
        {
            std::cout << this->realPart << " + " << this->phantomPart << "i" << std::endl;
        }
        else
        {
            std::cout << this->realPart << " - " << this->phantomPart << "i" << std::endl;
        }
    }
};

class Array
{
private:
    int *arr;
    int n;
public:
    Array()
    {
        this->n = 1;
        arr = new int[this->n];
        for (int i = 0; i < this->n; i++)
        {
            this->arr[i] = i + 1;
        }
    }
    Array(int n)
    {
        this->n = n;
        arr = new int[this->n];
        for (int i = 0; i < this->n; i++)
        {
            this->arr[i] = i + 1;
        }
    }
    int getSize()
    {
        return this->n;
    }
    void display()
    {
        for (int i = 0; i < this->n; i++)
        {
            std::cout << this->arr[i] << " ";
        }
        std::cout << std::endl;
    }
    void addElem(int element)
    {
        this->arr[n] = element;
        this->n++;
    }
    Array operator + (Array mas)
    {
        for (int i = 0; i < mas.n; i++)
        {
            this->arr[this->n++] = mas.arr[i];
        }
        return *this;
    }
    bool operator == (Array mas)
    {
        return (this->n == mas.n);
    }
    bool operator != (Array mas)
    {
        return (this->n != mas.n);
    }
    bool operator > (Array mas)
    {
        return (this->n > mas.n);
    }
    bool operator < (Array mas)
    {
        return (this->n < mas.n);
    }
};
*/
