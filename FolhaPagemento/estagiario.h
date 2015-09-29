#include "funcionario.cpp"

class Estagiario:public Funcionario {
    public:
        double calcular_imposto();
        double calcular_bonus();
};
