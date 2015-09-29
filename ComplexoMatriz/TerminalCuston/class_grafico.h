class grafico{
  public:
    grafico(string);
    void moldura(int ,int);
    int menu_();
    void imprime(int,int,string,bool);
    void imprime_menu();
    void gera_tela(int,int);
    void telas_();
    int get_status_menu();
    void pausar();
    void pagina_inicial();
  private:
    string menu[16];
    string texto[10];
    int i,status_menu, qtItens;
    char tecla;
};

