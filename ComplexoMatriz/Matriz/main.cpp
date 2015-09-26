#include "classMatrix.cpp"

int main() {
	Matrix a(4, 5);
	Matrix b(4, 5);
	Matrix c(5, 2);
	Matrix x = a + b;
	Matrix y = a - b;
	Matrix z = ( (x+y) - (a+b) ) * c;
	z.print();
	return 0;
}
