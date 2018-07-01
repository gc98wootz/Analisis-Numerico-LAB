#include <iostream>
#include <iomanip> // libreria para setprecision
#include <cmath>// libreria matematica
#include <stdio.h>
#include <conio.h>
using namespace std;
#define INTERVALOS 10
#define PI 3.1415927

double f(double x){return (pow(x,3))*(exp(-x))+(2*x)-4;}


void biseccion(double a,double b,double tolerancia){
  double nuevo;
  if(f(a)*f(b)>0){
    cout<<"No se puede aplicar metodo de biseccion";
  }else{
    do{
      nuevo=(a+b)/2.0;
      cout<< a <<"\t"<< b <<"\t"<< nuevo <<"\t\t"<<f(a)<<"\t\t"<<f(b)<<"\t\t"<<f(nuevo)<<endl;
      if(abs(f(nuevo))<=tolerancia){
        cout<<"\nPara una tolerancia de "<<tolerancia<<" la raiz es ="<<nuevo<<endl;
        break;
      }else{
        if(f(nuevo)*f(a)>0){
          a=nuevo;
        }else if(f(nuevo)*f(b)>0){
          b=nuevo;
        }
      }

    }while(1);
  }
}

int main(){
  cout<<setprecision(6);
  double a,b,tolerancia;
  cout<<" a = ";
  cin>>a;
  cout<<" b = ";
  cin>>b;
  cout<<"tolerancia = ";
  cin>>tolerancia;
  biseccion(a,b,tolerancia);
}
