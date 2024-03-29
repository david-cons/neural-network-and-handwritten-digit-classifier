#pragma once
#include <vector>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <thread>
#include <chrono>

class Matrix
{
    public:
        Matrix(const Matrix&);
        Matrix(int,int,float);
        Matrix(const std::vector<float>&);
        


        float get(int, int) const;
        void set(int,int,float);

        Matrix add(const Matrix&) const;
        Matrix subtract(const Matrix&) const;

        Matrix multiply(const Matrix&) const; 
        Matrix multiply(float) const; // scalar
        Matrix hadamardProduct(const Matrix&) const; //matrix of the same size element by element multiplication

        Matrix divide(float) const; //scalar

        Matrix transpose() const;


        void print() const;
        void randomize();
         


        int getCols() const;
        int getRows() const;


    private:
        int m_cols, m_rows;
        std::vector<std::vector<float>> matrix;
    
};
