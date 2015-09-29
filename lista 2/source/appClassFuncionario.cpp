float Funcionario::calculaSalarioBruto() {
	return (salario * qtd_horaria_mensal / carga_horaria_mensal + calculaBonus());
}

float Funcionario::calculaBonus() {
	return 0.0;
}

/*void Funcionario::setMatricula(string matriculaIn) {
	matricula = matriculaIn;
}*/

void Funcionario::setSalario(float salarioIn) {
	salario = salarioIn;
}

void Funcionario::setCarga_horaria(float carga_horaria_mensal_In) {
	carga_horaria_mensal = carga_horaria_mensal_In;
}

void Funcionario::setQtdHoras(float qtd_horaria_mensal_In) {
	if (qtd_horaria_mensal_In>carga_horaria_mensal || qtd_horaria_mensal<0) {
		cout << "Quantidades de horas trabalhadas não permitido.";
	} else {
		qtd_horaria_mensal = qtd_horaria_mensal_In;
	}
}

/*string Funcionario::getMatricula() {
	return matricula;
}*/

float Funcionario::getSalario() {
	return salario;
}

float Funcionario::getCarga_horaria() {
	return carga_horaria_mensal;
}

float Funcionario::getQtdHoras() {
	return qtd_horaria_mensal;
}
