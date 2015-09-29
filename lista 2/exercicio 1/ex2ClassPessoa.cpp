#include "ex2ClassPessoa.h"

pessoa::pessoa(string nomeIn, int idadeIn, float pesoIn, float alturaIn) {
	nome = nomeIn;
	idade = idadeIn;
	peso = pesoIn;
	altura = alturaIn;
}

string pessoa::getNome() {
	return nome;
}

void pessoa::setNome(string nomeIn) {
	nome = nomeIn;
}

int pessoa::getIdade() {
	return idade;
}
void pessoa::setIdade(int idadeIn) {
	idade = idadeIn;
}

float pessoa::getPeso() {
	return peso;
}
void pessoa::setPeso(float pesoIn) {
	peso = pesoIn;
}

float pessoa::getAltura() {
	return altura;
}

void pessoa::setAltura(float alturaIn) {
	altura = alturaIn;
}
