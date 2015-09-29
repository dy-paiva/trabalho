#include "../../includes.cpp"
#include "ex1Class.cpp"

int main() {
	int l, c;
	
	cout << "Digite a qtd linha: ";
	cin >> l;
	cout << "Digite a qtd coluna: ";
	cin >> c;
	
	Matriz m(l, c);
	Matriz a(l, c);
	
	m.soma(a, l, c);
	
	return 0;
}
