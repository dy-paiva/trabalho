class Triangulo {
	public:
		Triangulo(float c1, float c2, float c3);
		void setComprimentos(float c1, float c2, float c3);
		float getC1();
		float getC2();
		float getC3();
		int tipo_triangulo1();
		int tipo_triangulo2();
		string name_tipo_triangulo1();
		string name_tipo_triangulo2();
		float area();
		string name_tipo_triangulo();
	private:
		float c1, c2, c3;
};
