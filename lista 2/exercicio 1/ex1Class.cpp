#include "ex1Class.h"

pessoa::pessoa(string nomeIn, int idadeIn, float pesoIn, float alturaIn) {
	nome = nomeIn;
	idade = idadeIn;
	peso = pesoIn;
	altura = alturaIn;
}

string pessoa::getNome() {
	return nome;
}

int pessoa::getIdade() {
	return idade;
}

float pessoa::getAltura() {
	return altura;
}

float pessoa::getPeso() {
	return peso;
}

float pessoa::IMC() {
	return ( getPeso() / (getAltura()*getAltura()) );
}
