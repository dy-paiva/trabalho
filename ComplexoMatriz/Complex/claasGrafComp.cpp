#include "classGrafComp.h"

ostream& operator<<(ostream &Saida, Complex &cs) {
    cs.print();
    return Saida;
}

Graf::Graf(vector<Complex> objIn, vector<char> idIn) {
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
	vector<Complex>::iterator itCx;
	dados = fopen("dadosComplex.txt", "w");
	for(itId = id.begin(), itCx = obj.begin(); itCx != obj.end(); itCx++, itId++) {
		fprintf(dados, "id: <%c> - Real: <%f> Img: <%f>\n", *itId, itCx->getR(), itCx->getI());
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
  vector<Complex>::iterator it1;
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
		cout << "id: " << *it2 << " - ";
		cout << *it1;
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
		if (qtParam == 0) {
			char idIn;
			gotoxy(9, 18);
			idIn = 97+(obj.size());
			printf("O identificador desse objeto é %c", idIn);
			Complex tmp;
			obj.push_back(tmp);
			id.push_back(idIn);
			gotoxy(10, 18);
			cout << "Criado com sucesso, digite algo para continuar";
			char a = getch();
		} else {
			if (qtParam == 1) {
				char idIn;
				int parm1;
				gotoxy(9, 18);
				idIn = 97+(obj.size());
				printf("O identificador desse objeto é %c", idIn);
				gotoxy(10, 18);
				cout << "Digite o parametro desejado (somente números): ";
				cin >> parm1;
				Complex tmp(parm1);
				obj.push_back(tmp);
				id.push_back(idIn);
			} else {
				if (qtParam == 2) {
					char idIn;
					int parm1, parm2;
					gotoxy(9, 18);
					idIn = 97+(obj.size());
					printf("O identificador desse objeto é %c", idIn);
					gotoxy(10, 18);
					cout << "Digite o 1º parametro (somente números): ";
					cin >> parm1;
					gotoxy(11, 18);
					cout << "Digite o 2º parametro (somente números): ";
					cin >> parm2;
					Complex tmp(parm1, parm2);
					obj.push_back(tmp);
					id.push_back(idIn);
				} else {
					criar_objeto();
				}
			}
		}
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
	if (!obj.empty()) {
		cout << "Você possui " << obj.size() << " objetos contruido(s), o que deseja fazer ?";
		
		gotoxy(10, 18);
		op = move_option(3, option, 7, 18);
		
		if(op == 0) {
			criar_objeto();
		}
		if(op == 1) {
			lista_Complex();
		}
	}
}

void Graf::lista_Complex() {
  clearPage();
  vector<Complex>::iterator it1;
  vector<char>::iterator it2;
  RESETE;
  int i = 0;
  gotoxy(3, 25);
  cout << "id" << "\tReal" << "\tImaginário";
  for (it1 = obj.begin(), it2 = id.begin(); it1 != obj.end(); it1++, it2++, i++) {
	gotoxy(5+i, 25);
	cout << *it2 << "\t ";
	cout << it1->getR() << "\t   " << it1->getI();
  }
  gotoxy(18, 25);
  cout << "Digite algo para sair!";
  char a = getch();
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
	vector<Complex>::iterator itCx;
	Complex a;
	Complex b;
	for(itCx = obj.begin(), itId = id.begin(); itId != id.end(); itId++, itCx++) {
		if(parm1 == *itId) break;
	}
	if(itCx != obj.end()) {
		a = *itCx;
		for(itCx = obj.begin(), itId = id.begin(); itId != id.end(); itId++, itCx++) {
			if(parm2 == *itId) break;
		}
		if(itCx != obj.end()) {
			system("setterm -cursor off");
			b = *itCx;
			clearPage();
			BRANCO;
			NEGRITO;
			gotoxy(5,26);
			cout << "Escolha uma operação desejada: ";
			gotoxy(10,25);
			string opR[] = {"+", "-", "*"};
			int op = move_option(3, opR, 7, 40);
			Complex tmp;
			clearPage();
			BRANCO;
			NEGRITO;
			if(op == 0) {
				tmp = a + b;
				gotoxy(5,26);
				cout << "A soma do objeto: " << a;
				gotoxy(6,26);
				cout << " com o objeto: " << b;
				gotoxy(7,32);
				cout << " é: " << tmp;
			} else {
				if(op == 1){
					tmp = a - b;
					gotoxy(5,26);
					cout << "A subtração do objeto: " << a;
					gotoxy(6,26);
					cout << " com o objeto: " << b;
					gotoxy(7,32);
					cout << " é: " << tmp;
				} else {
					if(op == 2){
						tmp = a * b;
						gotoxy(5,26);
						cout << "A multiplicação do objeto: " << a;
						gotoxy(6,26);
						cout << " com o objeto: " << b;
						gotoxy(7,32);
						cout << " é: " << tmp;
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
