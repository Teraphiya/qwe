#ifndef SWAP_H_INCLUDED
#define SWAP_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

template <class T>
int swap_numbers(T& a, T& b)
{
    T t = a; // or T t(a)
    a = b;
    b = t;
    return 0;
}

template <typename T, int N, int M>
class Matrix {
public:
    vector< vector<T> > mat;
    Matrix()
    {
        for (int i = 0; i < N; i++)
        {
            vector<T> rw;
            for (int j = 0; j < M; j++)
                rw.push_back(i + j);
            mat.push_back(rw);
        }
    };
    int get(int i, int j) {
        T el;
        try {
            return mat.at(i).at(j);
        } catch (out_of_range& e) {
            cout<<e.what()<<endl;
            return -1;
        }
    };
};

#endif
