#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;


class Matriz
{
 public:
        double A[100][100];
        void Ingresar(int N);
        void Mostrar(int N);
        void Llenar_L(int N);
        void Llenar_U(int N);

}A,L,U;

class Vector
{
 public:
        double B[100];

        void Ingresar(int N){
         for ( int i = 1 ; i <= N ; i++ ){
              cout<<"\t\t - ["<<i<<"] : " ;
              cin>>B[i];
             }
        }

        void Mostrar(int N)        {
          for( int i = 1 ; i <= N ; i++ )
              cout<<"\t\t "<<setw(6)<<B[i]<<setw(5)<<""<<endl;;
        }
}B,X,Y;

class L_U
{
 public:
        L_U Factorizar(int N)
        {
        double suma,suma1;
        L.Llenar_L(N);
        U.Llenar_U(N);
        for ( int i = 1 ; i <= N ; i++){
            for ( int j = i ; j <= N ; j++) {
                suma = 0;
                for ( int k = 1 ; k <= i - 1 ; k++)
                     suma = L.A[i][k]*U.A[k][j] + suma;
                 U.A[i][j] = A.A[i][j] - suma;
                }

            for ( int j = i + 1; j <= N ; j++){
                 suma = 0;
                 for ( int k = 1 ; k <= i - 1 ; k++)
                      suma = L.A[j][k]*U.A[k][i] + suma;
                 L.A[j][i] = (A.A[j][i] - suma)/U.A[i][i];
                }
             L.A[i][i] = 1;
           }
        }

        void mostrar_LU(int N){
           cout<<endl<<endl<<"\t L = ";
           L.Mostrar(N);
           cout<<endl<<endl<<"\t U = ";
           U.Mostrar(N);
        }
        L_U Ecuacion(int N){
           Factorizar(N);
           mostrar_LU(N);
           Vector X;
           double sum = 0;
           for( int i = 1 ; i <= N ; i++ ){
               sum = 0;
               for( int j = 1 ; j <= i - 1 ; j++)
                   sum = sum + L.A[i][j]*Y.B[j];
               Y.B[i] = B.B[i]-sum/L.A[i][i];
               Y.Mostrar(N);
              }
              Y.Mostrar(N);
           cout<<endl<<endl<<"\t Y = "<<endl<<endl;
           Y.Mostrar(N);
           X.B[N] = Y.B[N]/U.A[N][N];
           for( int i = N - 1 ; i >= 1 ; i-- ){
               sum = 0;
               for( int j = i + 1 ; j <= N ; j++)
                   sum = sum + U.A[i][j]*X.B[j];
               X.B[i] = (Y.B[i]-sum)/U.A[i][i];
               X.Mostrar(N);
              }
              cout<<endl<<endl<<"\t X = "<<endl<<endl;
              X.Mostrar(N);
        }
}LU;

void Matriz :: Ingresar(int N){
 cout<<endl;
 for ( int i = 1 ; i <= N ; i++ )
     for ( int j = 1 ; j <= N ; j++ ){
          cout<<"\t\t - ["<<i<<","<<j<<"] : " ;
          cin>>A[i][j];
         }
}

void Matriz :: Mostrar(int N){
 cout<<endl;
 for( int i = 1 ; i <= N ; i++ ){
     cout<<"\t\t";
     for( int j = 1 ; j <= N ; j++ )
          if((A[i][j]<0.00001&&A[i][j]>0)||(A[i][j]>-0.00001&&A[i][j]<0))
             cout<<setw(6)<<0<<setw(6);
          else
             cout<<setw(6)<<setprecision(3)<<A[i][j]<<setw(6);
        cout<<" "<<endl;
    }
    cout<<endl;
}


void Matriz :: Llenar_L(int N){
 for ( int i = 1 ; i <= N ; i++ )
      for ( int j = 1 ; j <= N ; j++ ){
           if ( i == j )
              A[i][j] = 1;
           else
              A[i][j] = 0;
          }
}

void Matriz :: Llenar_U(int N){
 for ( int i = 1 ; i <= N ; i++ )
      for ( int j = 1 ; j <= N ; j++ )
          A[i][j] = 0;
}

int main(){
 Matriz L;
 int N;
 /*cout<<"\n\n\t > Dimension de la Matriz : ";
 cin>>N;

 A.Ingresar(N);
 cout<<endl<<endl<<"\t A = ";
 A.Mostrar(N);

 LU.Factorizar(N);
 LU.mostrar_LU(N);*/
 cout<<"\n\n\t > Dimension de la Matriz : ";
 cin>>N;

 A.Ingresar(N);
 cout<<endl<<endl<<"\t A = ";
 A.Mostrar(N);

 cout<<"\n\n\t > Ingrese Vector : "<<endl<<endl;
 B.Ingresar(N);

 LU.Ecuacion(N);

}
