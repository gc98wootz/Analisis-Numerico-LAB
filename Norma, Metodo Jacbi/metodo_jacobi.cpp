#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
int dim;
#define varError 0.0000001
float norma(float vector1[],float vector2[]);
float suma_jacobi(float Matriz[], float vector[], int componente);
void metJacobi(float A[][10],float b[],float x_prev[],int numIteraciones);
int main(){
    int numIteraciones;


    cout<<"Dimension de la matriz A: ";
    cin>>dim;
    float A[dim][10],b[dim],x_prev[dim];

    cout<<"\n Elementos de la matriz A: \n";
    for(int i=0;i<dim;i++) for(int j=0;j<dim;j++){
        cout<<"A("<<i<<","<<j<<")=";
        cin>>A[i][j];
         }

    cout<<"\n Elementos del vector b: \n";
    for(int i=0;i<dim;i++){
      cout<<"b("<<i<<")=";
      cin>>b[i];
    }

    cout<<"\n Numero de iteraciones: \n";
    cin>>numIteraciones;

    //cominezo algoritmo de Jacobi
    //Error se mide como la norma del vector diferenceia entre la iteracion i e i+1
    cout<<"\n Aproximacion inicial de la iteracion: \n";
    for( int i=0;i<dim;i++){
        cout<<"x("<<i<<")=";
        cin>>x_prev[i];
    }
    metJacobi(A,b,x_prev,numIteraciones);
    return 1;
}

float norma(float vector1[],float vector2[]){
    float aux=0;
    for(int i=0;i<dim;i++)
        aux+=(vector1[i]-vector2[i])*(vector1[i]-vector2[i]);
    return aux;
}

float suma_jacobi(float Matriz[], float vector[], int componente)
{
    float aux=0;
    for(int i=0;i<dim;i++){
        if (componente!=i){
            aux+=Matriz[i]*vector[i];
        }
    }
    return aux;
}
void metJacobi(float A[][10],float b[],float x_prev[],int numIteraciones){
  float error;
  int iteraciones=0;
  float aux[10];
  float x[10];
  error= varError+1;
  while (error>varError){
      for(int i=0;i<dim;i++){
          for(int j=0;j<dim;j++)
            aux[j]=A[i][j];
          x[i]=(1/A[i][i])*(b[i]-suma_jacobi(aux,x_prev,i));
      }
      error=norma(x,x_prev);

      cout<<"\n\n Iteracion "<<iteraciones<<": \n";
      for(int i=0;i<dim;i++){
          x_prev[i]=x[i];
          cout<<"X("<<i<<")="<<x[i]<<"\n";
      }

      iteraciones++;
      if (iteraciones==numIteraciones) error=varError-1;
  }

  cout<<"Solucion del sistema\n";
  cout<<"Numero de iteraciones: "<<iteraciones<<" \n";
  for(int i=0;i<dim;i++){
      cout<<"x("<<i<<")="<<x[i]<<"\n";
  }
}
