#include "claasGrafMatr.h"
#include <string.h>

ostream& operator<<(ostream &Saida, Matrix &cs) {
    cs.print();
    return Saida;
}

Graf::Graf(vector<Matrix> objIn, vector<char> idIn) {
	obj = objIn;
	id = idIn;
	criarUsar[0] = "Criar novo objeto";
	criarUsar[1] = "Usar objeto(s) criado(s)";
	criarUsar[2] = "Voltar";
	qtCriarUsar = 3;
	somarOp[0] = "Efetuar soma entre dois objetos";
	somarOp[1] = "Voltar";
	qtSomarOp = 2;
}

void Graf::salvarDados() {
	FILE *dados;
	vector<char>::iterator itId;
	vector<Matrix>::iterator itCx;
	dados = fopen("dadosMatrix.txt", "w");
	for(itId = id.begin(), itCx = obj.begin(); itCx != obj.end(); itCx++, itId++) {
		fprintf(dados, "%c %d %d\n", *itId, itCx->getLine(), itCx->getColumn());
		int line = itCx->getLine();
		int column = itCx->getColumn();
		for(int i = 0; i < line; i++){
			for(int j = 0; j < column; j++){
				fprintf(dados, "%d", itCx->getValue(i, j));
				if(j+1 != column) fprintf(dados, " ");
			}
			fprintf(dados, "\n");
		}	
	}
	fclose(dados);
}

void clearPage() {
	for (int i = 2; i < 21; i++) {
		for (int j = 16; j < 80; j++) {
			gotoxy(i, j);
			printf(" ");
		}
	}
}

void Graf::tela_operacao() {
  vector<Matrix>::iterator it1;
  vector<char>::iterator it2;
	CONTORNO_VERDE;
  for (int i = 0; i < 20; i++){
		gotoxy(2+i, 50);
  	cout << " ";
  }
  RESETE;
  int i = 0;
  for (it1 = obj.begin(), it2 = id.begin(); it1 != obj.end(); it1++, it2++, i++) {
		gotoxy(3+i, 52);
		cout << "id: " << *it2 << " - Linha: " << it1->getLine() << " Coluna: " << it1->getColumn();
	}
}

void Graf::color_selected(int op, int size, string *var, int x, int y) {
	for(int i = 0; i < size; i++) {
		gotoxy(x+i, y);
		if (i == op){ 
			CONTORNO_AZUL;BRANCO;
			cout << var[i];
		} else { 
			RESETE;VERDE;
			cout << var[i];
		}
	}
	RESETE;
}

int Graf::move_option(int size, string *var, int x, int y) {
	int op = 0;
	char tecla;
	color_selected(op, size, var, x, y);
	while(true){
		tecla=getch();
		if(tecla=='\n')return op;
		switch(tecla){
			case 'w':
			   op--;
			   break;
			case 's':
			   op++;
			   break;
			case 'W':
			   op--;
			   break;
			case 'S':
			   op++;
			   break;
			case 65:
			   op--;
			   break;
			case 66:
			   op++;
			   break;
		}
		if(op<0)op=size-1;
		if(op>size-1)op=0;
		color_selected(op, size, var, x, y);
	}
	return op;
}

void Graf::criar_objeto() {
	int qt;
	system("setterm -cursor on");
	clearPage();
	gotoxy(5, 18);
	cout << "Criando Cadastro, siga o que se pede";
	gotoxy(7, 18);
	cout << "Digite a quantidade de Objetos que deseja construir: ";
	cin >> qt;
	clearPage();
	for(int i = 0; i < qt; i++) {
		gotoxy(5, 18);
		cout << "Para o " << i+1 << "º objeto, Digite:";
		
		char idIn;
		int parm1, parm2;
		gotoxy(7, 18);
		idIn = 97+(obj.size());
		printf("O identificador desse objeto é %c", idIn);
		gotoxy(8, 18);
		cout << "Digite o número de linha(s): ";
		cin >> parm1;
		gotoxy(9, 18);
		cout << "Digite o número de coluna(s): ";
		cin >> parm2;
		Matrix tmp(parm1, parm2);
		int valor;
		for(int l = 0; l < parm1; l++) {
			for(int c = 0; c < parm2; c++) {
				clearPage();
				gotoxy(5, 18);
				printf("O identificador desse objeto é %c", idIn);
				gotoxy(7, 18);
				cout << "Digite o valor da matriz na posição (" << l << ", " << c << ") : ";
				cin >> valor;
				tmp.setValue(l,c,valor);
			}
		}

		obj.push_back(tmp);
		id.push_back(idIn);
		
		clearPage();
	}
}

int Graf::init_tela(){
	int op;
	string teste;
	clearPage();
	gotoxy(5, 18);
	if (!obj.empty()) {
		cout << "Você possui " << obj.size() << " objetos contruido(s), o que deseja fazer ?";
		
		gotoxy(10, 18);
		op = move_option(qtCriarUsar, criarUsar, 7, 18);
		
		if(op == 0) {
			criar_objeto();
		}
		if(op == 2) return 0;
		operacoes();
	}
}

int Graf::objetos(){
	int op;
	string option[] = {"Criar novo objeto", "Ver objetos criados", "voltar"};
	clearPage();
	gotoxy(5, 18);
	cout << "Você possui " << obj.size() << " objetos contruido(s), o que deseja fazer ?";
	
	gotoxy(10, 18);
	op = move_option(3, option, 7, 18);
	
	if(op == 0) {
		criar_objeto();
	}
	if(op == 1 && !obj.empty()) {
		lista_Matrix();
	}
	return 0;
}

void Graf::lista_Matrix() {
  clearPage();
  vector<Matrix>::iterator it1;
  vector<char>::iterator it2;
  RESETE;
  int k = 0;
  char op;
  gotoxy(3, 25);
  for (it1 = obj.begin(), it2 = id.begin(); it1 != obj.end(); it1++, it2++, k++) {
	gotoxy(5+k, 25);
	cout << "id: " << *it2;
	cout << " Linha: " << it1->getLine();
	cout << " Coluna: " << it1->getColumn();
  }
  gotoxy(7+k, 18);
  system("setterm -cursor on");
  cout << "Digite o id de uma das opções para ver detalhadamente: ";
  cin >> op;
  for (it1 = obj.begin(), it2 = id.begin(); it1 != obj.end(); it1++, it2++, k++) {
	if(*it2 == op) {
		clearPage();
		cout << *it1;
	}
  }
  gotoxy(18, 18);
  cout << "Digite algo para sair";
  char a = getch();
  system("setterm -cursor off");
 }

void Graf::operacoes() {
	system("setterm -cursor off");
	char parm1, parm2;
	clearPage();
	tela_operacao();
	gotoxy(5, 18);
	system("setterm -cursor on");
	cout << "Digite o nome (a, b, etc..)";
	gotoxy(7, 18);
	cout << "do 1º objeto: ";
	cin >> parm1;
	gotoxy(8, 18);
	cout << "do 2º objeto: ";
	cin >> parm2;
	if(!validation(parm1, parm2)) return;
	system("setterm -cursor off");
}

int Graf::validation(char parm1, char parm2) {
	vector<char>::iterator itId;
	vector<Matrix>::iterator itCx;
	char aId, bId;
	for(itCx = obj.begin(), itId = id.begin(); itId != id.end(); itId++, itCx++) {
		if(parm1 == *itId) break;
	}
	if(itCx != obj.end()) {
		Matrix a = *itCx;
		aId = *itId;
		for(itCx = obj.begin(), itId = id.begin(); itId != id.end(); itId++, itCx++) {
			if(parm2 == *itId) break;
		}
		if(itCx != obj.end()) {
			system("setterm -cursor off");
			Matrix b = *itCx;
			bId = *itId;
			clearPage();
			BRANCO;
			NEGRITO;
			gotoxy(5,26);
			cout << "Escolha uma operação desejada: ";
			gotoxy(10,25);
			string opR[] = {"+", "-", "*"};
			int op = move_option(3, opR, 7, 40);
			clearPage();
			BRANCO;
			NEGRITO;
			if(op == 0) {
				Matrix tmp = a + b;
				gotoxy(5,26);
				cout << "A soma do objeto: " << aId;
				gotoxy(6,26);
				cout << "com o objeto: " << bId;
				gotoxy(7,26);
				cout << "foi realizada, tecle algo para ver: ";
				char e = getch();
				clearPage();
				cout << tmp;
			} else {
				if(op == 1){
					Matrix tmp = a - b;
					gotoxy(5,26);
					cout << "A subtração do objeto: " << aId;
					gotoxy(6,26);
					cout << "com o objeto: " << bId;
					gotoxy(7,26);
					cout << "foi realizada, tecle algo para ver: ";
					char e = getch();
					clearPage();
					cout << tmp;
				} else {
					if(op == 2){
						if(a.getColumn() == b.getLine()){
							Matrix tmp = a * b;
							gotoxy(5,26);
							cout << "A multiplicação do objeto: " << aId;
							gotoxy(6,26);
							cout << "com o objeto: " << bId;
							gotoxy(7,26);
							cout << "foi realizada, tecle algo para ver: ";
							char e = getch();
							clearPage();
							cout << tmp;
						} else {
							gotoxy(5,26);
							cout << "Não é possivel realizar a multiplicação do objeto: " << aId;
							gotoxy(6,26);
							cout << "com o objeto: " << bId;
							gotoxy(8,26);
							cout << "Tente novamente com outros objetos ou crie outro";
							gotoxy(10,26);
							cout << "Tecle algo para continuar";
							char sx = getch();
						}
					}
				}
			}
			char a = getch();
			return 0;
		} else {
			return 0;
		}
	}
	return 0;
}

void Graf::telaExit(){
	clearPage();
	BRANCO;
	NEGRITO;
	gotoxy(5,26);
	cout << "Você está preste a deixar o sistema,";
	gotoxy(6,25);
	cout << "deseja salvar as operações realizada?";
	gotoxy(10,25);
	string sN[] = {"Sim", "Não", "Cancelar"};
	int op = move_option(3, sN, 12, 40);
	if(op == 0) {
		salvarDados();
		system("clear");
		return;
	} else {
		if(op == 1){
			system("clear");
			return;
		}
	}
}
