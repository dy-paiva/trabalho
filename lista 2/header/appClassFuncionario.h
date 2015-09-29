class Funcionario:public PessoaFisica {
	public:
		//void setMatricula(long int);
		void setSalario(float);
		void setCarga_horaria(float);
		void setQtdHoras(float);
		//long int getMatricula();
		float getSalario();
		float getCarga_horaria();
		float getQtdHoras();
		float calculaSalarioBruto();
	private:
		long int matricula;
		float salario;
		float carga_horaria_mensal;
		float qtd_horaria_mensal;
	private:
		float calculaBonus(); // retornar 0.0
};
