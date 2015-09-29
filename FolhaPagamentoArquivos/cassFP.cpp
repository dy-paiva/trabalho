double calcular_salario() {
	return (salarioBase - calcular_imposto() + calcular_bonus());
}

double getSalarioBase(){
	return salarioBase;
}

void setSalarioBase(double salarioBaseIn){
	salarioBase = salarioBaseIn;
}

void getNome(string nomeIn){
	nome = nomeIn;
}