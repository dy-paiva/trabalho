#include "class_grafico.h"

grafico::grafico(string caminhoMenu){
	system("setterm -cursor off");
	FILE *menuFile;
	FILE *textoFile;
	char linha[100];
	if(caminhoMenu == "Complex") {
		menuFile = fopen("../Complex/menu.txt", "r");
		textoFile = fopen("../Complex/texto.txt", "r");
	} else {		
		menuFile = fopen("../Matriz/menu.txt", "r");
		textoFile = fopen("../Matriz/texto.txt", "r");
	}
	int i = 0;
	qtItens = 0;
	while(fgets(linha, 50, menuFile) != NULL) {
		qtItens++;
		menu[i++] = linha;
	}
	i = 0;
	while(fgets(linha, 100, textoFile) != NULL) {
		texto[i++] = linha;
	}
	fclose(menuFile);
	fclose(textoFile);
	status_menu=0;
}

void grafico::pagina_inicial() {
	BRANCO;
	NEGRITO;
	gotoxy(5,40);
	cout << texto[0];
	gotoxy(10,25);
	cout << texto[1];
	gotoxy(13,37);
	cout << "Selecione no menu uma opção";
}

void grafico::moldura(int linha,int coluna){
	LIMPA_TELA;
	CONTORNO_VERDE;
	int i;
	for(i=0;i<coluna;i++)printf(" ");
	gotoxy(coluna,0);
	for(i=0;i<coluna;i++)printf(" ");
	for(i=1;i<=linha;i++){
		gotoxy(i,0);
		printf(" ");
		gotoxy(i,coluna);
		printf(" ");
	}
	for(i=1;i<=coluna;i++){
		gotoxy(i,15);
		printf(" ");
	}
	for(i=1;i<=coluna;i++){
		gotoxy(21,i);
		printf(" ");
	}
	RESETE;
	gotoxy(21,35);
	CONTORNO_VERDE;
	BRANCO;
	NEGRITO;
	cout<<"DIEGO FELIPE ;)";
	RESETE;
	gotoxy(22,2);	
	cout<<"Para mais informações acesse:";
	gotoxy(23,2);
	cout<<"https://www.facebook.com/profile.php?id=100010221553487";
	RESETE;
}

void grafico::telas_() {
	system("clear");
	this->moldura(LINHA,COLUNA);
	BRANCO;NEGRITO;
	gotoxy(3,6);
	cout<<"MENU";RESETE;
	imprime_menu();
}

int grafico::menu_(){
	this->moldura(LINHA,COLUNA);
	pagina_inicial();
	BRANCO;NEGRITO;
	gotoxy(3,6);
	cout<<"MENU";RESETE;
	imprime_menu();
	while(true){
		tecla=getch();
		if(tecla=='\n')return status_menu;
		switch(tecla){
			case 'w':
			   status_menu--;
			   break;
			case 's':
			   status_menu++;
			   break;
			case 'W':
			   status_menu--;
			   break;
			case 'S':
			   status_menu++;
			   break;
			case 65:
			   status_menu--;
			   break;
			case 66:
			   status_menu++;
			   break;
		}
		if(status_menu<0)status_menu=qtItens-1;
		if(status_menu>qtItens-1)status_menu=0;
		imprime_menu();
	}
	return 0;
}



void grafico::imprime_menu(){
	for(i=0;i<16;i++){
		imprime(5+i,4,menu[i],i==status_menu);
	}
}

void grafico::imprime(int linha,int coluna,string texto,bool op){
	gotoxy(linha,coluna);
	if(op){
		BRANCO;
		CONTORNO_AZUL;
	} else {
		BRANCO;
	}
	cout<<texto;
	RESETE;
	return;
}

int grafico::get_status_menu(){
	return status_menu;
}

void grafico::pausar(){
	gotoxy(9,3);
	cout<<"Digite algo para continuar: ";getch();
}
