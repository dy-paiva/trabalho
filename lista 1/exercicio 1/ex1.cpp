#include "../../includes.cpp"
#include "ex1Class.cpp"

int main() {
	pessoa p("Diego", 18, 56.9, 1.84);
	cout << "O IMC do(a) " << p.getNome() << " e " << p.IMC() << '.' << endl;
	return 0;
}
