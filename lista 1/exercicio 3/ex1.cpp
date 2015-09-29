#include "../../includes.cpp"
#include "ex1Class.cpp"

int main() {
	float raio;
	string user_in;
	cout << "Deseja informar o raio (sim, nao) ??";
	cin >> user_in;
	if (user_in == "sim") {
		cout << "Digite o raio: ";
		cin >> raio;
	}
	Circunferencia c(raio);
	
	cout << "O diametro da circunferencia e " << c.diametro() << endl;
	cout << "O perimetro da circunferencia e " << c.perimetro() << endl;
	cout << "O area da circunferencia e " << c.area() << endl;
	cout << "\n\nO PI usado para o calculo foi " << c.getPI() << endl;
	return 0;
}
