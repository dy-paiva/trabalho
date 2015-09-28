#include "classComplex.h"

Complex::Complex() {
	a.push_back(0);
	b.push_back(0.0);
}

Complex::Complex(float aIn) {
	a.push_back(aIn);
	b.push_back(0);
}

Complex::Complex(float aIn, float bIn) {
	a.push_back(aIn);
	b.push_back(bIn);
}

// Complex Complex::operator+(float aIn) {
// 	return Complex((aIn + this->a), this->b);
// }

// Complex Complex::operator+(const Complex& parm) {
// 	return Complex((this->a + parm.a), (this->b + parm.b));
// }

// Complex Complex::operator-(float aIn) {
// 	return Complex((aIn - this->a), this->b);
// }

// Complex Complex::operator-(const Complex& parm) {
// 	return Complex((this->a - parm.a), (this->b - parm.b));
// }

// Complex Complex::operator*(float aIn) {
// 	return Complex((aIn * this->a), this->b);
// }

// Complex Complex::operator*(const Complex& parm) {
// 	//(ac + bdx²) + (bc+ad)x
// 	return Complex(((this->a * parm.a) + ((this->b * parm.b) * -1)), ((this->b*parm.a + this->a*parm.b)));
// }

void Complex::somar() {
	system("setterm -cursor on");
	int qt;
	string teste;
	gotoxy(5, 18);
	cout << "Digite a quantidade de Objetos que deseja construir: ";
	cin >> qt;
	for(int i = 0; i < qt; i++) {
		gotoxy(3, 18);
		cout << "Para o " << i+1 << "º objeto, Digite";
		gotoxy(5+i, 18);
		cout << "Quantidade de parametros desejado: ";
		cin >> teste;
	}
	system("setterm -cursor off");
}

void Complex::print() {
  gotoxy(5,30);
  vector<float>::iterator itA;
  vector<float>::iterator itB;
  for (itA = a.begin(), itB = b.begin() ; itA != a.end(); ++itA, ++itB){
    cout << *itA << " + " << *itB << "i" << endl;
  }
	string teste;
	cin >> teste;
}



