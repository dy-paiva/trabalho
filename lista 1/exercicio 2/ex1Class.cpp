#include "ex1Class.h"

Retangulo::Retangulo(float larguraIn, float alturaIn) {
	if (larguraIn) {
		largura = larguraIn;
		altura = alturaIn;
	} else {
		largura = 0;
		altura = 0;
	}
}

void Retangulo::setAltura(float alturaIn) {
	altura = alturaIn;
}

void Retangulo::setLargura(float larguraIn) {
	largura = larguraIn;
}

float Retangulo::getAltura() {
	return altura;
}

float Retangulo::sua_altura() {
	return altura;
}

float Retangulo::getLargura() {
	return largura;
}

bool Retangulo::e_quadrado() {
	return (getAltura()==getLargura());
}


