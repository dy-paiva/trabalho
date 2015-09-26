#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Matrix {
	public:
		Matrix(int, int);
		int getLine();
		int getColumm();
		int getValue(int, int);
		void setValue(int, int, int);
		void print();
	
		Matrix operator+(const Matrix&);
		Matrix operator-(const Matrix&);
		Matrix operator*(const Matrix&);
	private:
		int line, columm;
		int **matrix;

};