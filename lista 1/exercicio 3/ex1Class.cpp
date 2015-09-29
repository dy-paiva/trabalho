#include "ex1Class.h"

Circunferencia::Circunferencia(float raioIn) {
	if (raioIn) {
		raio = raioIn;
	} else {
		raio = 0;
	}
	PI = 3.14159;
}

void Circunferencia::setRaio(float raioIn) {
	raio = raioIn;
}

float Circunferencia::getRaio() {
	return raio;
}

float Circunferencia::diametro() {
	return (raio*2);
}

float Circunferencia::perimetro() {
	return (raio*2*PI);
}

float Circunferencia::area() {
	return (PI*(raio*raio));
}

float Circunferencia::getPI() {
	return PI;
}


