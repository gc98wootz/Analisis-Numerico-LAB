#include <iostream>
#include <iomanip> // libreria para setprecision
#include <cmath>// libreria matematica
#include <stdio.h>
#include <conio.h>
using namespace std;
#define INTERVALOS 10
#define PI 3.1415927
#define tolerancia 0.001
double f(double x){return (pow(x,3))*(exp(-x+1))+(5*(pow(x,2))*cos(2*x+1))-7;}

//-0.5
//2
void biseccion(double a,double b,double n){
  double nuevo;
  if(f(a)*f(b)>0){
    cout<<"No se puede aplicar metodo de biseccion";
  }else{
    do{
      nuevo=(a+b)/2.0;
      cout<<n<<"\t"<< a <<"\t"<< b <<"\t"<< nuevo <<"\t\t"<<f(a)<<"\t\t"<<f(b)<<"\t\t"<<f(nuevo)<<endl;
      if(n==0){
        cout<<"\n la raiz es ="<<nuevo<<endl;
        break;
      }else{
        if(f(nuevo)*f(a)>0){
          a=nuevo;
        }else if(f(nuevo)*f(b)>0){
          b=nuevo;
        }
      }
      --n;
    }while(n>=0);
  }
}

int main(){
  cout<<setprecision(6);
  double a,b,n;
  cout<<" a = ";
  cin>>a;
  cout<<" b = ";
  cin>>b;
  cout<<"iteraciones";
  cin>>n;
  biseccion(a,b,n);
}
