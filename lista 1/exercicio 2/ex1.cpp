#include "../../includes.cpp"
#include "ex1Class.cpp"

int main() {
	float altura, largura;
	string user_in;
	cout << "Deseja informar a altura e a largura (sim, nao) ??";
	cin >> user_in;
	if (user_in == "sim") {
		cout << "Digite a altura: ";
		cin >> altura;
		cout << "Digite a largura: ";
		cin >> largura;
	}
	Retangulo r(altura, largura);
	cout << "A altura do retangulo e " << r.sua_altura() << endl;
	string result = r.e_quadrado() ? "Sim" : "Nao";
	cout << "E um quadrado ? " << endl << "Resultado: " << result << endl;
	return 0;
}
