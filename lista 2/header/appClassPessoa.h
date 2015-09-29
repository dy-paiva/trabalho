class pessoa {
	public:
		pessoa(string nome, int idade, float peso, float altura);
		string getNome();
		void setNome(string);
		int getIdade();
		void setIdade(int);
		float getPeso();
		void setPeso(float);
		float getAltura();
		void setAltura(float);
	private:
		int idade;
		float peso;
		float altura;
	protected:
		string nome;
};
