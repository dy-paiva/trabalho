#include "classComplex.h"

Complex::Complex() {
	a = b = 0;
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

Complex Complex::operator+(Complex& parm) {
	return Complex((this->a + parm.a), (this->b + parm.b));
}

Complex Complex::operator-(float aIn) {
	return Complex((aIn - this->a), this->b);
}

Complex Complex::operator-(Complex& parm) {
	return Complex((this->a - parm.a), (this->b - parm.b));
}

Complex Complex::operator*(float aIn) {
	return Complex((aIn * this->a), this->b);
}

Complex Complex::operator*(Complex& parm) {
	//(ac + bdx²) + (bc+ad)x
	return Complex(((this->a * parm.a) + ((this->b * parm.b) * -1)), ((this->b*parm.a + this->a*parm.b)));
}

void Complex::print() {
	cout << this->a << " + " << this->b << "i" << endl;
}