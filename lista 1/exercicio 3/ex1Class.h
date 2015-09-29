class Circunferencia {
	public:
		Circunferencia(float raio);
		void setRaio(float);
		float getRaio();
		float diametro();
		float perimetro();
		float area();
		float getPI();
	private:
		float raio;
		float PI;
};
