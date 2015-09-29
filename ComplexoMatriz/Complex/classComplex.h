class Complex {
	public:
		string id;
		float a, b;
		Complex();
		Complex(float);
		Complex(float, float);
		float getR();
		float getI();
		void print();
		
		Complex operator+(float);
		Complex operator+(const Complex&);

		Complex operator-(float);
		Complex operator-(const Complex&);

		Complex operator*(float);
		Complex operator*(const Complex&);

};
