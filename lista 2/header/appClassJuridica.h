class PessoaJuridica:public pessoa {
	public:
		void setCNPJ(long int);
		long int getCNPJ();
		void setRazaoSocial(string);
		string getRazaoSocial();
		void setNomeFantasia(string);
		string getNomeFantasia();
	private:
		long int CNPJ;
		string razaoSocial;
		string nomeFantasia;
};
