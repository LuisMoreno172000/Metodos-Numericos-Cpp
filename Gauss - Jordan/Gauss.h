class Gauss {
public:
    Gauss(const int N, const int M);
    void intercambioFilas(int r0, int r1);
    void impMatrix();
    void productoEscFila(float a, int filas, int inicio);
    void sumaFilas(int f1, int f2);
    void restaFilas(int r0, int r1, int inicio);
    void gaussElimination();
    int encPivote( int filas);
    int jordan();

private:
    int matrix[3][4]={{-1,2,0,3},{0,1,3,4},{2,-3,4,1}}; 
	int filas;
	int cols;
};

