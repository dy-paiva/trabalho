#include "funcionario.cpp"

class Gerente:public Funcionario {
    public:
        void setNome();
        double calcular_imposto();
        double calcular_bonus();
        int qtdFGerenciados;
};
