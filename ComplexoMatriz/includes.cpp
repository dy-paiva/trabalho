//Diego Felipe da Silva Paiva
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


////////////////////////////////////////////
#define RESETE printf("\033[0m")
#define PRETO printf("\33[30m");
#define NORMAL printf("\033[22m")
#define NEGRITO printf("\033[1m")
#define CINZA_CLARO printf("\033[2m")
#define SUBLINHADO printf("\033[4m")
#define NEGATIVO printf("\033[7m")
#define CINZA_CLARO_2 printf("\033[30m")
#define VERMELHO printf("\033[31m")
#define VERDE printf("\033[32m")
#define AMARELO printf("\033[33m")
#define AZUL printf("\033[34m") 
#define ROCHO printf("\033[35m")
#define AZUL_CLARO printf("\033[36m")
#define BRANCO printf("\033[37m")

/////////////CONTORNOS//////////////////
#define CONTORNO_CINZA printf("\033[40m")
#define CONTORNO_VERMELHO printf("\033[41m")
#define CONTORNO_VERDE printf("\033[42m")
#define CONTORNO_AMARELO printf("\033[43m")
#define CONTORNO_AZUL printf("\033[44m")
#define CONTORNO_PRETO printf("\33[40m");
#define CONTORNO_ROCHO printf("\033[45m")
#define CONTORNO_AZUL_CLARO printf("\033[46m") 
#define CONTORNO_BRANCO printf("\033[47m")
#define CONTORNO_NORMAL printf("\033[49m")

/////////////////////////////////////////////
#define LIMPA_TELA printf("\33[H\33[2J")
#define LINHA 30
#define COLUNA 80

void gotoxy(int x,int y){
  printf("%c[%d;%df",0x1B,x,y);
}

char getch(){
	//#include <unistd.h>   //_getch*/
  //#include <termios.h>  //_getch*/
  char buf=0;
  struct termios old={0};
  fflush(stdout);
  if(tcgetattr(0, &old)<0)
      perror("tcsetattr()");
  old.c_lflag&=~ICANON;
  old.c_lflag&=~ECHO;
  old.c_cc[VMIN]=1;
  old.c_cc[VTIME]=0;
  if(tcsetattr(0, TCSANOW, &old)<0)
      perror("tcsetattr ICANON");
  if(read(0,&buf,1)<0)
      perror("read()");
  old.c_lflag|=ICANON;
  old.c_lflag|=ECHO;
  if(tcsetattr(0, TCSADRAIN, &old)<0)
      perror ("tcsetattr ~ICANON");
  return buf;
}
