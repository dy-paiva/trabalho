#include "../includes.cpp"
/////////////Arquivos//////////////
#include "classComplex.cpp"
#include "claasGrafComp.cpp"
#include "../TerminalCuston/class_grafico.cpp"

void initVector(vector<Complex> &cx, vector<char> &idIn) {
	FILE *dados;
	char id;
	float a, b;
	dados = fopen("dadosComplex.txt", "r");
	while(fscanf(dados, "%*[^<]< %c %*[^<]< %f %*[^<]< %f", &id, &a, &b) != EOF) {
		Complex tmp(a, b);
		cx.push_back(tmp);
		idIn.push_back(id);
	}
	fclose(dados);
}

int main() {
	vector<Complex> complexVector;
	vector<char> id;
	initVector(complexVector, id);
	grafico vm("Complex");
	Graf cx(complexVector, id);
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
