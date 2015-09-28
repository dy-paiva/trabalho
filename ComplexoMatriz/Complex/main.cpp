#include "../TerminalCuston/class_grafico.cpp"
#include "classComplex.cpp"

int main() {
	grafico vm("Complex");
	Complex cx;
	int opNum;
	while(true){
		opNum = vm.menu_();
		if(opNum == 0) {
			vm.telas_();
			cx.somar();
		}
	}
		
	// Complex a;
	// Complex b(5);
	// Complex c(3, 2);

	// a = b + 5;
	// a.print();
	// a = a - c;
	// a.print();
	// a = a * b;
	// a = a + c * (b + 7);
	
	// a.print();
	
	system("setterm -cursor on");
	return 0;
}
