#include "ex1Class.h"

Matriz::Matriz(int L, int C) {
	matriz = new int*[L];
	
	for(int i=0; i < L; i++) {
		matriz[i] = new int[C];
		for (int j=0; j<C; j++) {
		  matriz[i][j] = 0;
		}
	}
}

int Matriz::getMatriz(int l, int c) {
	return matriz[l][c];
}

void Matriz::setMatriz(int l, int c, int v) {
	matriz[l][c] = v;
}

void Matriz::soma(Matriz &a, int l, int c) {
	Matriz b(l, c);
	
	for(int i=0; i < l; i++) {
		for (int j=0; j<c; j++) {
			b.setMatriz(i, j, b.getMatriz(i, j)+matriz[i][j]);
		}
	}
}

