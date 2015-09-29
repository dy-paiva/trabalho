class PessoaFisica:public pessoa {
	public:
		void setCPF(long int);
		long int getCPF();
		void setNome(string);
		string getNome();
	private:
		long int CPF;
		string nome;
};
