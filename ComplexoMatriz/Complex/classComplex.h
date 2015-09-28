#include <iostream>
#include <vector>

class Complex {
	public:
		vector<float> a;
		vector<float> b;
		Complex();
		Complex(float);
		Complex(float, float);
		void print();

		void somar();
		
		// Complex operator+(float);
		// Complex operator+(const Complex&);

		// Complex operator-(float);
		// Complex operator-(const Complex&);

		// Complex operator*(float);
		// Complex operator*(const Complex&);

};
