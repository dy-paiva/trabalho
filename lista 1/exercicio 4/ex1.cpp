#include "../../includes.cpp"
#include "ex1Class.cpp"

int main() {
	float c1, c2, c3;
	string user_in;
	cout << "Deseja informar a altura e a largura (sim, nao) ??";
	cin >> user_in;
	if (user_in == "sim") {
		cout << "Digite a comprimento 1: ";
		cin >> c1;
		cout << "Digite a comprimento 2: ";
		cin >> c2;
		cout << "Digite a comprimento 2: ";
		cin >> c3;
	}
	Triangulo t(c1, c2, c3);
	string tipo = t.name_tipo_triangulo1();
	if (tipo != "-1") {
		cout << "A retangulo e " <<  tipo << endl;
	} else {
		cout << "nao forma um triangulo" << endl;
	}
	tipo = t.name_tipo_triangulo2();
	if (tipo != "-1") {
		cout << "A retangulo e " <<  tipo << endl;
		cout << "A area do retangulo e " << t.area() << endl;
	} else {
		cout << "nao forma um triangulo" << endl;
	}
	return 0;
}
