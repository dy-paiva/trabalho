#include "ex2ClassJuridica.h"

void PessoaJuridica::setCNPJ(long int CnpjIn) {
	CNPJ = CnpjIn;
}

long int PessoaJuridica::getCNPJ() {
	return CNPJ;
}

void PessoaJuridica::setRazaoSocial(string razaoSocialIn) {
	razaoSocial = razaoSocialIn;
}

string PessoaJuridica::getRazaoSocial() {
	return razaoSocial;
}

void PessoaJuridica::setNomeFantasia(string nomeFantasiaIn) {
	nomeFantasia = nomeFantasiaIn;
}

string PessoaJuridica::getNomeFantasia() {
	return nomeFantasia;
}
