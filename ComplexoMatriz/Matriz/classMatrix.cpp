#include "classMatrix.h"

Matrix::Matrix(int l, int c) {
	line = l;
	column = c;
	matrix = new int*[l];
	for(int i = 0; i < l; i++){
		matrix[i] = new int[c];
		for(int j = 0; j < c; j++){
			matrix[i][j]=1;
		}
	}
}

int Matrix::getLine() {
	return line;
}

int Matrix::getColumn() {
	return column;
}

void Matrix::setValue(int i, int j, int value) {
	matrix[i][j] = value;
}

int Matrix::getValue(int i, int j) {
	return matrix[i][j];
}

Matrix Matrix::operator+(const Matrix &matrixIn) {
	Matrix add(line, column);
	for(int i = 0; i < line; i++){
		for(int j = 0; j < column; j++){
			add.setValue(i, j, (matrix[i][j] + matrixIn.matrix[i][j]));
		}
	}
	return add;
}

Matrix Matrix::operator-(const Matrix &matrixIn) {
	Matrix add(line, column);
	for(int i = 0; i < line; i++){
		for(int j = 0; j < column; j++){
			add.setValue(i, j, (matrix[i][j] - matrixIn.matrix[i][j]));
		}
	}
	return add;
}

Matrix Matrix::operator*(const Matrix &matrixIn) {
	Matrix add(line, column);
	for(int i = 0; i < line; i++)  
    for(int j = 0; j < line; j++)   
      for(int k = 0; k < matrixIn.column; k++)  
        add.setValue(i, j, matrix[i][k]*matrixIn.matrix[k][j]);
	return add;
}

void Matrix::print() {
	gotoxy(3, 18);
	cout << "Line = " << line;
	gotoxy(4, 18);
	cout << "Column = " << column;
	int j , i, k;
	for(i = j = 0; i < column; i++){
		gotoxy(6, 21+j);
		printf("%d ", i);
		j+=2;
	}
	for(i = j = 0; i < column*2+1; i++){
		gotoxy(7, 20+j);
		printf("-");
		j++;
	}
	for(i = k = 0; i < line; i++){
		gotoxy(8+i, 16);
		printf(" %d |", i);
		for(j = k = 0; j < column; j++){
			gotoxy(8+i, 20+k);
			printf(" %d ", getValue(i, j));
			k+=2;
		}
		gotoxy(8+i, 19+(column*2+2));
		printf("|");
	}
	for(k = j = 0; k < column*2+1; k++){
		gotoxy(8+i, 20+j);
		printf("-");
		j++;
	}
	printf("\n");
}
