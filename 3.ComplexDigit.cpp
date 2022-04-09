#include "ComplexDigit.h"
#include <math.h>
#include <iostream>

ComplexDigit::ComplexDigit(int realPart, int phantomPart)
{
    this->realPart = realPart;
    this->phantomPart = phantomPart;
}
ComplexDigit::ComplexDigit()
{
    this->realPart = 0;
    this->phantomPart = 0;
}

ComplexDigit ComplexDigit::operator + (ComplexDigit d)
{
    return ComplexDigit(this->realPart + d.realPart, this->phantomPart + d.phantomPart);
}
/// (2 + 3i)*(-4 * 1i)
ComplexDigit ComplexDigit::operator * (ComplexDigit d)
{
    return ComplexDigit(this->realPart * d.realPart - this->phantomPart * d.phantomPart,
                        this->realPart * d.phantomPart + this->phantomPart * d.realPart);
}
ComplexDigit ComplexDigit::operator * (double c)
{
    return ComplexDigit(this->realPart * c, this->phantomPart * c);
}
ComplexDigit::operator double() const
{
    return sqrt(this->realPart * this->realPart * 1.0 +
                this->phantomPart * this->phantomPart * 1.0);
}

void ComplexDigit::display()
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
