//
// Created by Rahul Sahu on 16-12-2019.
//

#ifndef C_SAMPLE_MATRIX_H
#define C_SAMPLE_MATRIX_H

#include <exception>
#include <cstring>
#include <iostream>
using namespace std;
template <class dtype>
class Matrix
{
    int row, col;
    dtype **data;
public:
    class ArithmeticError : exception
    {
    public:
        char *message;
        ArithmeticError(const char *err="")
        {
            int len = strlen(err);
            message = new char[len+1];
            strcpy(message, err);
        }
    };
    Matrix(int n=0, int m=0)
    {
        row = n;
        col = m;
        data = new dtype*[row];
        for (int i = 0; i < row; ++i)
            data[i] = new dtype[col];

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                data[i][j] =(dtype) 0;
            }
        }
    }
    Matrix operator + (Matrix &var)
    {
        if(row!=var.row || col!=var.col)
            throw ArithmeticError("Dimension are different");
        else
        {
            Matrix<dtype> temp(row, col);
            for (int i = 0; i < row; ++i)
                for (int j = 0; j < col; ++j)
                    temp.data[i][j] = data[i][j] + var.data[i][j];
            return temp;
        }
    }
    Matrix operator - (Matrix &var)
    {
        if(row!=var.row || col!=var.col)
            throw ArithmeticError("Dimension are different");
        else
        {
            Matrix<dtype> temp(row, col);
            for (int i = 0; i < row; ++i)
                for (int j = 0; j < col; ++j)
                    temp.data[i][j] = data[i][j] - var.data[i][j];
            return temp;
        }
    }
    Matrix operator * (Matrix &var)
    {
        if(col==var.row)
        {
            Matrix<dtype> temp(row, var.col);
            for (int i = 0; i < row; ++i)
                for (int j = 0; j < var.col; ++j)
                    for (int k = 0; k < col; ++k)
                        temp.data[i][j] += data[i][k] * var.data[k][j];
            return temp;
        }
        else
            throw ArithmeticError("Dimension are not adequate");
    }
    dtype determinant(int r=0, int c=0)
    {
        if(row-r != col-c)
            throw ArithmeticError("Need Square Matrix");
        else
        {
            int sign = 1;
            int result = 0;
            for (int j = 0; j < col; ++j)
            {
                result += sign * data[r][j] * determinant(r+1, j);
                sign = -sign;
            }
        }
    }
    void show()
    {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void input()
    {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout<<"Enter ("<<i<<","<<j<<") : ";
                cin>>data[i][j];
            }
        }
    }
};


#endif //C_SAMPLE_MATRIX_H
