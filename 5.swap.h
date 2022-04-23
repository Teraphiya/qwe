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

template <typename T>
class Matrix {
public:
    int N, M;
    vector< vector<double> > mat;
    Matrix()
    {
        N = 2;
        M = 2;

        for (int i = 0; i < N; i++)
        {
            vector<double> rw;
            for (int j = 0; j < M; j++)
                rw.push_back(i + j);
            mat.push_back(rw);
        }
    };
    Matrix(int r, int c)
    {
        N = r;
        M = c;
        for (int i = 0; i < N; i++)
        {
            vector<double> rw;
            for (int j = 0; j < M; j++)
                rw.push_back(i + j);
            mat.push_back(rw);
        }
    };
    int get(int i, int j) {
        if(i >= 0 && i<N && j >= 0 && j<M) {
            return mat[i][j];
        } else {
            cout << "WRONG INDEX!\n";
            return -1;
        }
    };
};

#endif
