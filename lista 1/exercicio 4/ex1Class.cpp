#include "ex1Class.h"

Triangulo::Triangulo(float c1In, float c2In, float c3In) {
	if (c1) {
		c1 = c1In;
		c2 = c2In;
		c3 = c3In;
	} else {
		c1 = 0;
		c2 = 0;
		c3 = 0;
	}
}

void Triangulo::setComprimentos(float c1In, float c2In, float c3In) {
	c1 = c1In;
	c2 = c2In;
	c3 = c3In;
}

float Triangulo::getC1() {
	return c1;
}


float Triangulo::getC2() {
	return c2;
}


float Triangulo::getC3() {
	return c3;
}

float Triangulo::area() {
	if ((tipo_triangulo1()!=-1) && (tipo_triangulo2()!=-1)) {
		float t = (c1+c2+c3)/2;
		return ( sqrt((t*(t-c1)*(t-c2)*(t-c3))) );
	} else {
		return -1;
	}
}

int Triangulo::tipo_triangulo1() {
	if (c1==c2 && c2==c3 && c1==c3) {
		return 1;
	} else {
		if (c1==c2 || c2==c3 || c1==c3) {
			return 2;
		} else  {
			if (c1!=c2 && c2!=c3 && c1!=c3) {
				return 3;
			} else {
				return -1;
			}
		} 
	}
}

int Triangulo::tipo_triangulo2() {
	if (c1 < (c2+c3)) {
		return 1;
	} else {
		if (c1 > (c2+c3)) {
			return 2;
		} else  {
			if (c1 == (c2+c3)) {
				return 3;
			} else {
				return -1;
			}
		} 
	}
}

string Triangulo::name_tipo_triangulo1() {
	int tipo_num = tipo_triangulo1();
	if (tipo_num != -1) {
		if (tipo_num == 1) {
			return "equilatero";
		} else {
			if (tipo_num == 2) {
				return "isosceles";
			} else  {
				return "escaleno";
			} 
		}
	}
	return "-1";
}

string Triangulo::name_tipo_triangulo2() {
	int tipo_num = tipo_triangulo2();
	if (tipo_num != -1) {
		if (tipo_num == 1) {
			return "acutangulo";
		} else {
			if (tipo_num == 2) {
				return "obtusangulo";
			} else  {
				return "ratangulo";
			} 
		}
	}
	return "-1";
}
