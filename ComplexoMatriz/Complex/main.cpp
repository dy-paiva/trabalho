#include "classComplex.cpp"

int main() {
	Complex a;
	Complex b(5);
	Complex c(3, 2);

	a = b + 5;
	a.print();
	a = a - c;
	a.print();
	a = a * b;
	a = a + c * (b + 7);
	
	a.print();
	
	return 0;
}