bool Gerente::autenticar(string senhaIn) {
	return senhaIn == senha;
}

void Gerente::setQt_funcionario_gc(int qt_funcionario_gc_In) {
	qt_funcionario_gc = qt_funcionario_gc_In;
}

int Gerente::getQt_funcionario_gc() {
	return qt_funcionario_gc;
}

void Gerente::setQt_horas_excedentes(int qt_horas_excedentes_In) {
	qt_horas_excedentes = qt_horas_excedentes_In;
}

/*void Gerente::getQt_horas_excedentes() {
	return qt_horas_excedentes;
}*/

bool Gerente::alterarSenha(string senha_pass, string senha_new) {
	if(senha == "") {
		if (senha_pass == senha) {
			senha = senha_new;
			return true;
		} else {
			return false;
		}
	} else {
		senha = senha_new;
	}
	return true;
}

/*void Funcionario::setQtdHoras(float qtd_horaria_mensal_In) {
	if (qtd_horaria_mensal_In>carga_horaria_mensal || qtd_horaria_mensal<0) {
		setQt_horas_excedentes(qtd_horaria_mensal_In);
	} else {
		qtd_horaria_mensal = qtd_horaria_mensal_In;
	}
}*/

/*float Gerente::calculaBonus() {
	if (!((0.5/100*salario) > (30/100*salario)) {
		return (salario * 1.5 % carga_horaria_mensal) + (0.5/100*salario);
	}
	return 0.0;
}*/











