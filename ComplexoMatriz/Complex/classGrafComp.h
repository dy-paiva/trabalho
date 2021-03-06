class Graf {
	public:
		Graf(vector<Complex>, vector<char>);
		int init_tela();
		void salvarDados();
		void tela_operacao();
		int validation(char, char);
		void criar_objeto();
		void lista_Complex();
		void operacoes();
		void result(char, char);
		int objetos();
		int move_option(int, string*, int, int);
		void color_selected(int, int, string*, int, int);
		void telaExit();
	private:
		vector<Complex> obj;
		vector<char> id;
		string criarUsar[5], somarOp[5];
		int qtCriarUsar, qtSomarOp;
};
