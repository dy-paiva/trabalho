class graf:public Complex {
	public:
		graf();
		int init_tela();
		void tela_operacao();
		void criar_objeto();
		void operacoes();
		void result();
		int move_option(int, string*);
		void color_selected(int, int, string*);
	private:
		string criarUsar[5], somarOp[5];
		int qtCriarUsar, qtSomarOp;
};
