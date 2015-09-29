#include "gerente.h"

double Gerente::calcular_imposto() {
    return (salarioBase * (0.4));
}

double Gerente::calcular_bonus() {
    return 0;
}

void Gerente::setNome(string nomeIn){
    nome = nomeIn;
}
