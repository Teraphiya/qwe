#ifndef COMPLEXDIGIT_H_INCLUDED
#define COMPLEXDIGIT_H_INCLUDED

class ComplexDigit
{
private:
    int realPart;
    int phantomPart;
public:
    ComplexDigit(int realPart, int phantomPart);
    ComplexDigit();
    ComplexDigit operator + (ComplexDigit d);
    ComplexDigit operator * (ComplexDigit d);
    ComplexDigit operator * (double c);
    operator double() const;
    void display();
};

#endif // COMPLEXDIGIT_H_INCLUDED
