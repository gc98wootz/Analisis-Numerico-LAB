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
FILE *doc;

void biseccion(double a,double b,double n){
  doc = fopen("numeros.txt","a++");
  double nuevo;
  if(f(a)*f(b)>0){
    cout<<"No se puede aplicar metodo de biseccion";
  }else{
    do{
      nuevo=(a+b)/2.0;
      cout<<n<<"\t"<< a <<"\t"<< b <<"\t"<< nuevo <<"\t\t"<<f(a)<<"\t\t"<<f(b)<<"\t\t"<<f(nuevo)<<endl;
      fprintf(doc, "%d\t%d\t%d\t%d\t%d\t%d\n",a,b,nuevo,f(a),f(b),f(nuevo));
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
      --n;
    }while(n>=0);
  }
  fclose(doc);
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
