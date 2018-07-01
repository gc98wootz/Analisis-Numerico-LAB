#include <iostream>
#include <iomanip> // libreria para setprecision
#include <cmath>// libreria matematica
#include <stdio.h>
#include <conio.h>
using namespace std;
#define INTERVALOS 10
#define PI 3.1415927
#define tolerancia 0.001
double f(double x){return (pow(x,3))*(exp(-x))+(2*x)-4;}

//-0.5
//2
void biseccion(double a,double b,double n){
  double nuevo;
  double num=0;
  if(f(a)*f(b)>0){
    cout<<"No se puede aplicar metodo de biseccion";
  }else{
    do{
      nuevo=(a+b)/2.0;
      cout<<num+1<<"\t"<< a <<"\t"<< b <<f(b)<<"\t\t"<<f(nuevo)<<endl;
      if(num==n || abs(f(nuevo))<=tolerancia){
        cout<<"\n la raiz es ="<<nuevo<<endl;
        break;
      }else{
        if(f(nuevo)*f(a)>0){
          a=nuevo;
        }else if(f(nuevo)*f(b)>0){
          b=nuevo;
        }
      }
      num++;
    }while(1);
  }
}

int main(){
  cout<<setprecision(4);
  double a,b,n;
  cout<<" a = ";
  cin>>a;
  cout<<" b = ";
  cin>>b;
  cout<<"iteraciones";
  cin>>n;
  biseccion(a,b,n);
}
