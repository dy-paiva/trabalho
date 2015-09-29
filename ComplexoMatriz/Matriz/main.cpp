#include "../includes.cpp"
/////////////Arquivos//////////////
#include "classMatrix.cpp"
#include "claasGrafMatr.cpp"
#include "../TerminalCuston/class_grafico.cpp"

void initVector(vector<Matrix> &cx, vector<char> &idIn) {
	FILE *dados;
	char id;
	int l, c, num;
	dados = fopen("dadosMatrix.txt", "r");
	while(fscanf(dados, " \n%c %d %d", &id, &l, &c) != EOF) {
		Matrix tmp(l, c);
		cout << id << " " << l << " " << c << endl;
		for(int i = 0; i < l; i++) {
			for(int j = 0; j < c; j++) {
				fscanf(dados, "%d", &num);
				tmp.setValue(i, j, num);
			}
		}
		cx.push_back(tmp);
		idIn.push_back(id);
	}
	fclose(dados);
}

int main() {
	vector<Matrix> matrixVector;
	vector<char> id;
	initVector(matrixVector, id);
	grafico vm("Matrix");
	Graf cx(matrixVector, id);
	int opNum;
	while(true){
		opNum = vm.menu_();
		if(opNum == 0)  cx.init_tela();
		else if (opNum == 1) cx.objetos();
		else if(opNum == 2) {
			cx.telaExit();
			break;
		}
	}
	
	system("setterm -cursor on");
	return 0;
}
