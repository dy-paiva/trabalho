class Gerente:public Funcionario {
	public:
		bool alterarSenha(string, string);
		bool autenticar(string);
		void setQt_funcionario_gc(int);
		int getQt_funcionario_gc();
		void setQt_horas_excedentes(int);
		//int getQt_horas_excedentes();
	private:
		int qt_funcionario_gc;
		int qt_horas_excedentes;
		string senha;
};
