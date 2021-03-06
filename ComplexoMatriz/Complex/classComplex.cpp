#include "classComplex.h"

Complex::Complex() {
	a = 0;
	b = 0;
}

Complex::Complex(float aIn) {
	a = aIn;
	b = 0;
}

Complex::Complex(float aIn, float bIn) {
	a = aIn;
	b = bIn;
}

Complex Complex::operator+(float aIn) {
	return Complex((aIn + this->a), this->b);
}

Complex Complex::operator+(const Complex& parm) {
	return Complex((this->a + parm.a), (this->b + parm.b));
}

Complex Complex::operator-(float aIn) {
	return Complex((aIn - this->a), this->b);
}

Complex Complex::operator-(const Complex& parm) {
	return Complex((this->a - parm.a), (this->b - parm.b));
}

Complex Complex::operator*(float aIn) {
	return Complex((aIn * this->a), this->b);
}

Complex Complex::operator*(const Complex& parm) {
	return Complex(((this->a * parm.a) + ((this->b * parm.b) * -1)), ((this->b*parm.a + this->a*parm.b)));
}

float Complex::getR() {
	return a;
}

float Complex::getI() {
	return b;
}

void Complex::print() {
  cout << "Real: " << a << " Imag: " << b << "i" << endl;
}
