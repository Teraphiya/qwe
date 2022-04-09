#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

class Array
{
private:
    int *arr;
    int n;
public:
    Array();
    Array(int n);
    int getSize();
    void display();
    void addElem(int element);
    Array operator + (Array mas);
    bool operator == (Array mas);
    bool operator != (Array mas);
    bool operator > (Array mas);
    bool operator < (Array mas);
};

#endif
