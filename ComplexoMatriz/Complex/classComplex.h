#include <iostream>

using namespace std;

class Complex {
	public:
		float a, b;
		Complex();
		Complex(float);
		Complex(float, float);
		void print();
		
		Complex operator+(float);
		Complex operator+(const Complex&);

		Complex operator-(float);
		Complex operator-(const Complex&);

		Complex operator*(float);
		Complex operator*(const Complex&);

};