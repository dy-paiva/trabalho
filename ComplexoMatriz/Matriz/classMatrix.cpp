#include "classMatrix.h"

Matrix::Matrix(int l, int c) {
	line = l;
	columm = c;
	this->matrix = new int*[l];
	for(int i = 0; i < l; i++){
		this->matrix[i] = new int[c];
		for(int j = 0; j < c; j++){
			this->matrix[i][j]=1;
		}
	}
}

void Matrix::setValue(int i, int j, int value) {
	this->matrix[i][j] = value;
}

int Matrix::getValue(int i, int j) {
	return this->matrix[i][j];
}

Matrix Matrix::operator+(const Matrix &matrixIn) {
	Matrix add(this->line, this->columm);
	for(int i = 0; i < this->line; i++){
		for(int j = 0; j < this->columm; j++){
			add.setValue(i, j, (this->matrix[i][j] + matrixIn.getValue(i,j)));
		}
	}
	return add;
}

Matrix Matrix::operator-(const Matrix &matrixIn) {
	Matrix add(this->line, this->columm);
	for(int i = 0; i < this->line; i++){
		for(int j = 0; j < this->columm; j++){
			add.setValue(i, j, (this->matrix.getValue(i, j) - matrixIn.getValue(i,j)));
		}
	}
	return add;
}

Matrix Matrix::operator*(const Matrix &matrixIn) {
	Matrix add(this->line, this->columm);
	for(int i = 0; i < this->line; i++){
		for(int j = 0; j < this->columm; j++){
			add.setValue(i, j, (this->matrix.getValue(i, j) * matrixIn.getValue(i,j)));
		}
	}
	return add;
}

void Matrix::print() {
	system("clear");
	printf("line = %d\ncolumm = %d\n\n    ", this->line, this->columm);
	for(int i = 0; i < this->columm; i++){
		printf(" %d ", i);
	}
	printf("\n   ");
	for(int i = 0; i < this->columm*3+2; i++){
		printf("-");
	}
	printf("\n");
	for(int i = 0; i < this->line; i++){
		printf(" %d |", i);
		for(int j = 0; j < this->columm; j++){
			printf(" %d ", this->getValue(i, j));
		}
		printf("| \n");
	}
	printf("   ");
	for(int i = 0; i < this->columm*3+2; i++){
		printf("-");
	}
	printf("\n");
}
