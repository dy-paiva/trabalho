class Retangulo {
	public:
		Retangulo(float largura, float altura);
		void setLargura(float);
		void setAltura(float);
		float getLargura();
		float getAltura();
		float sua_altura();
		bool e_quadrado();
	private:
		float largura;
		float altura;
};
