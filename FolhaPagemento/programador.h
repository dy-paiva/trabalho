#include "funcionario.cpp"

class Programador:public Funcionario {
    public:
        double calcular_bonus();
        double calcular_imposto();
};
