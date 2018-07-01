
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>


using namespace std;
class Matrix {
    public:
        Matrix(int, int);
        void print_matrix();
        void fill_random();
        void delete_matrix();
        int **m_matrix;
        int m_dim_matrix;
        int columnas;
        int filas;
        int m_max;
        int m_min;
        vector<int> sust_regresiva(const int *);
        vector<int> eliminacion_gauss(const int *);
        void escalona();
        void escalonarPivote();
        void inicializar();
        void identidad();
        void insertCol(const int *);
        void resizeCol(int );
        void swapRow(int ,int );
        void setMatrix(const vector<vector<int> > xs);
};

Matrix::Matrix(int rows , int cols)
{
    columnas = cols;
    filas = rows;
    m_matrix = new int*[filas];

    for (int i = 0; i < filas; i++) {
        m_matrix[i] = new int[columnas];
    }
}
void Matrix::inicializar(){
    cout<<"ingrese los valores de la matrix: "<<endl;
    int elem;
    for (int i=0; i < filas; i++){
        for (int j=0; j < columnas; j++){
            cout << "\nRow " << (i+1) << " Col " << (j+1) << " :";
            cin >> elem;
            m_matrix[i][j]=elem;
        }
    }
}
//imprime Matriz
void Matrix::print_matrix()
{
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << m_matrix[i][j] << " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
}
void Matrix::resizeCol(int nuevo){
    int minsize=(nuevo>columnas ? columnas : nuevo);
    for(int i=0;i<filas;i++){
        int *xs=new int[nuevo];
        for(int j=0;j<minsize;j++){
            xs[j]=m_matrix[i][j];
        }
        delete[] m_matrix[i];
        m_matrix[i]=xs;
    }
    columnas=nuevo;
}
void Matrix::insertCol(const int * objeto){
  resizeCol(columnas+1);
  for(int i=0;i<filas;i++){
    m_matrix[i][columnas-1]=*(objeto+1);
  }
}
// Llenar aleatoriamente una Matriz
void Matrix::fill_random()
{
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            m_matrix[i][j] = rand() % 30+1;
        }
    }

    m_max = m_matrix[0][0];
    m_min = m_matrix[0][0];
    srand(time(NULL));
}
// borra la matriz
void Matrix::delete_matrix()
{
    for (int i = 0; i < filas; i++) {
        delete[] m_matrix[i];
    }
    delete[] m_matrix;
}
void Matrix::identidad(){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(i==j)
                m_matrix[i][j]=1;
            else
                m_matrix[i][j]=0;
        }
    }
}
void Matrix::setMatrix(const vector<vector<int> > xs){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++)
            this->m_matrix[i][j]=xs[i][j];
    }
}
void Matrix::swapRow(int fila_1,int fila_2){
    if(fila_1>filas || fila_2>columnas){
        cout<<"fila de rango"<<endl;
    }
    else{
        int temp;
        for(int i=0;i<columnas;i++){
            temp=m_matrix[fila_1][i];
            m_matrix[fila_1][i]=m_matrix[fila_2][i];
            m_matrix[fila_2][i]=temp;
        }
    }
}

 void Matrix  :: escalona () {
    for( int j = 0 ; j <filas- 1 ; j ++) {
        for ( int i = j + 1 ; i <filas; i ++) {
            int m = m_matrix [i] [j] / m_matrix [j] [j];
            for( int k = 0 ; k <columnas; k ++) {
                m_matrix [i] [k]  =m_matrix [i] [k] - (m * m_matrix [j] [k]);
                cout << m_matrix [i] [k] << "  " ;
            }
            cout << endl;
        }
    }
}
void Matrix::escalonarPivote(){
  for(int j=0;j<filas-1;j++){
        int max_val=m_matrix[j][j];
        int max_file=j;
        for(int x=j+1;x<filas;x++){
            if(max_val<m_matrix[x][j]){
                max_val=m_matrix[x][j];
                max_file=x;
            }
        }
        if(j!=max_file)
            swapRow(j,max_file);
        for(int i=j+1;i<filas;i++){
            int m=m_matrix[i][j]/m_matrix[j][j];
            for(int k=0;k<columnas;k++){
                m_matrix[i][k]-=m*m_matrix[j][k];
            }
        }
    }
}

vector<int> Matrix::sust_regresiva(const int *objeto){
    vector<int> nuevo(filas,0);

    for(int i=filas-1;i>=0;i--){
        int  suma=0;
        for(int j=i;j<filas;j++)
            suma=suma + m_matrix[i][j]*nuevo[j];
        nuevo[i]=(*(objeto+i)-suma)/m_matrix[i][i];
    }
    return nuevo;
}
vector <int > Matrix:: eliminacion_gauss(const int * objeto){
  insertCol(objeto);
  escalonarPivote();
  vector<int> r=this->sust_regresiva(objeto);
  return r;
}

int main(){
  // Para no generar los mismos números aleatorios
    Matrix A(3.0,3.0);
    vector<vector<int> > matriz ={{10,-7,1},{7,1,-11},{2,3,-11}};
    A.setMatrix(matriz);
    cout<<"matriz A:"<<endl;
    cout<<A<<endl;
    int arr[]=,{4,-3,4};
    vector rpta;
    rpta=A.eliminacion_gauss(arr);
    cout<<A<<endl;
    cout<<"solucion"<<endl;
    for(vector::iterator it=rpta.begin();it!=rpta.end();it++)
      cout<<*it<<" "<<end;
  return 0;
}
