class Matriz {
	public:
		Matriz(int l, int c);
		void setMatriz(int l, int c, int v);
		int getMatriz(int l, int c);
		void soma(Matriz &a, int l, int c);
	private:
		int l;
		int c;
		int **matriz;
};
