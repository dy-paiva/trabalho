#include "classMatrix.h"

Matrix::Matrix(int l, int c) {
	line = l;
	columm = c;
	matrix = new int*[l];
	for(int i = 0; i < l; i++){
		matrix[i] = new int[c];
		for(int j = 0; j < c; j++){
			matrix[i][j]=1;
		}
	}
}

void Matrix::setValue(int i, int j, int value) {
	matrix[i][j] = value;
}

int Matrix::getValue(int i, int j) {
	return matrix[i][j];
}

Matrix Matrix::operator+(const Matrix &matrixIn) {
	Matrix add(line, columm);
	for(int i = 0; i < line; i++){
		for(int j = 0; j < columm; j++){
			add.setValue(i, j, (matrix[i][j] + matrixIn.matrix[i][j]));
		}
	}
	return add;
}

Matrix Matrix::operator-(const Matrix &matrixIn) {
	Matrix add(line, columm);
	for(int i = 0; i < line; i++){
		for(int j = 0; j < columm; j++){
			add.setValue(i, j, (matrix[i][j] - matrixIn.matrix[i][j]));
		}
	}
	return add;
}

Matrix Matrix::operator*(const Matrix &matrixIn) {
	Matrix add(line, columm);
	for(int i = 0; i < line; i++){
		for(int j = 0; j < columm; j++){
			add.setValue(i, j, (matrix[i][j] * matrixIn.matrix[i][j]));
		}
	}
	return add;
}

void Matrix::print() {
	system("clear");
	printf("line = %d\ncolumm = %d\n\n    ", line, columm);
	for(int i = 0; i < columm; i++){
		printf(" %d ", i);
	}
	printf("\n   ");
	for(int i = 0; i < columm*3+2; i++){
		printf("-");
	}
	printf("\n");
	for(int i = 0; i < line; i++){
		printf(" %d |", i);
		for(int j = 0; j < columm; j++){
			printf(" %d ", getValue(i, j));
		}
		printf("| \n");
	}
	printf("   ");
	for(int i = 0; i < columm*3+2; i++){
		printf("-");
	}
	printf("\n");
}
