#include "classGrafComp.h"

graf::graf() {
	criarUsar[0] = "Criar novo objeto";
	criarUsar[1] = "Usar objeto(s) criado(s)";
	criarUsar[2] = "Voltar";
	qtCriarUsar = 3;
	somarOp[0] = "Efetuar soma entre dois objetos";
	somarOp[1] = "Voltar";
	qtSomarOp = 2;
}

void clearPage() {
	for (int i = 2; i < 21; i++) {
		for (int j = 16; j < 80; j++) {
			gotoxy(i, j);
			printf(" ");
		}
	}
}

void graf::tela_operacao() {
	// vector<float>::iterator it1;
 //  vector<float>::iterator it2;
 //  vector<string>::iterator itId;
	CONTORNO_VERDE;
  for (int i = 0; i < 20; i++){
		gotoxy(2+i, 53);
  	cout << " ";
  }
  RESETE;
  //int i = 0;
 //  for (it1 = a.begin(), it2 = b.begin(), itId = id.begin(); it1 != a.end(); it1++, it2++, itId++, i++) {
	// 	gotoxy(3+i, 58);
	// 	cout << *itId << " - Real: " << *it1 << " Imag.: " << *it2;
	// }
}

void graf::color_selected(int op, int size, string *var) {
	for(int i = 0; i < size; i++) {
		gotoxy(7+i, 18);
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

int graf::move_option(int size, string *var) {
	int op = 0;
	char tecla;
	color_selected(op, size, var);
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
		color_selected(op, size, var);
	}
	return op;
}

void graf::criar_objeto() {
	int qtParam, qt;
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
		gotoxy(7, 18);
		cout << "Quantidade de parametros desejado ( 0 a 2): ";
		cin >> qtParam;
		// id.push_back("b");
		if (qtParam == 0) {
			// a.push_back(0);
			// b.push_back(0);
		} else {
			if (qtParam == 1) {
				int parm1;
				gotoxy(9, 18);
				cout << "Digite o parametro desejado (somente números): ";
				cin >> parm1;
				// a.push_back(parm1);
				// b.push_back(0);
			} else {
				if (qtParam == 2) {
					int parm1, parm2;
					gotoxy(9, 18);
					cout << "Digite o 1º parametro (somente números): ";
					cin >> parm1;
					gotoxy(10, 18);
					cout << "Digite o 2º parametro (somente números): ";
					cin >> parm2;
					// a.push_back(parm1);
					// b.push_back(parm2);
				} else {
					criar_objeto();
				}
			}
		}
		clearPage();
	}
}

int graf::init_tela(){
	int op;
	string teste;
	gotoxy(5, 18);
	if (true) {
	// if (!a.empty()) {
		cout << "Você possui 1" << " objetos contruido(s), o que deseja fazer ?";
		
		gotoxy(10, 18);
		op = move_option(qtCriarUsar, criarUsar);
		
		if(op == 0) {
			criar_objeto();
			return 1;
		} 
		if(op == 1) {
			return 1;
		}
	}
	return 2;
}

void graf::operacoes() {
	int op = init_tela();
	system("setterm -cursor off");
	if (op == 1) {
		clearPage();
		int op2 = move_option(qtSomarOp, somarOp);
		if(op2 == 1) operacoes();
	}
	if(op == 2) return;
	clearPage();
	tela_operacao();
	char *operation;
	gotoxy(5, 18);
	system("setterm -cursor on");
	cout << "Digite uma operação (exe: a + b) ";
	gotoxy(6, 18);
	cout << "a opração: ";
	result();
	system("setterm -cursor off");
}

void graf::result() {
	char *operation;
	scanf("%*[^ \n\r]%[^ +-*/]", operation);
	// while(true) {
	// 	// if(operation == '\n') {
	// 	// 	return;
	// 	// } else {
	// 	// 	// if(buscaId(operation)) {
	// 	// 	// 	// float a = buscaValorR(operation);
	// 	// 	// 	// float b = buscaValorI(operation);
	// 	// 	// }
	// 	// }
	// }
}
