class Graf {
	public:
		Graf(vector<Matrix>, vector<char>);
		int init_tela();
		void salvarDados();
		void tela_operacao();
		int validation(char, char);
		void criar_objeto();
		void lista_Matrix();
		void operacoes();
		void result(char, char);
		int objetos();
		int move_option(int, string*, int, int);
		void color_selected(int, int, string*, int, int);
		void telaExit();
	private:
		vector<Matrix> obj;
		vector<char> id;
		string criarUsar[5], somarOp[5];
		int qtCriarUsar, qtSomarOp;
};
