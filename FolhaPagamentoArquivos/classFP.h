#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Funcionario {
	public:
		double calcular_salario();
		double getSalarioBase();
		string getNome();
		void setSalarioBase(double);
		void setNome(string);
	private:
		string nome;
	protected:
		virtual double calcular_imposto() = 0;
		virtual double calcular_bonus() = 0;
		float salarioBase;
};