class pessoa {
	public:
		pessoa(string nome, int idade, float peso, float altura);
		string getNome();
		float getPeso();
		int getIdade();
		float getAltura();
		float IMC();
	private:
		string nome;
		int idade;
		float peso;
		float altura;
};
