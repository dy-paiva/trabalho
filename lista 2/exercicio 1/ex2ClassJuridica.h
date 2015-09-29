class PessoaJuridica:public pessoa {
	public:
		void setCNPJ(long int);
		long int getCNPJ();
		void setRazaoSocial(string razaoSocial);
		string getRazaoSocial();
		void setNomeFantasia(string nomeFantasia);
		string getNomeFantasia();
	private:
		long int CNPJ;
		string razaoSocial;
		string nomeFantasia;
};
