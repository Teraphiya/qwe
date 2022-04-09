#include <iostream>
#include "5.swap.h"

using namespace std;

//23 вариант. функция C, класс H

int main()
{
    int a, b;
    cout << "Enter values: \n";
    cin >> a >> b;
    swap_numbers(a, b);
    cout << a << " " << b << endl;

    Matrix<int> arr(a, b);
    cout << "ARR[a-1][b-3]: " << arr.get(a-1, b-3) << endl;
    cout << "ARR[a+1][b]: " << arr.get(a+1, b) << endl;
}