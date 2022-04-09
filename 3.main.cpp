#include <iostream>
#include <stdio.h>
#include <math.h>
#include "3.ComplexDigit.h"
#include "3.Array.h"

//23

int main()
{
    //Проверяем комплексные
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

    //Проверяем массив
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
