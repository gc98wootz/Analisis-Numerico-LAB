#include<iostream>
#include <iomanip> // libreria para setprecision
#include<cmath>//biblioteca para poder utilizar la funcion pow()
#include <stdio.h>
#include <conio.h>
using namespace std;
#define EXACTITUD 0.001
FILE *doc;
/*para encontrar una raíz de la ecuación f(x)=0 analíticamente, proporcionar la función
F(X)
DATOS:
-->a Y b que forman un intervalo, en donde se halla una raíz
-->TOL criterio de convergencia//la tolerancia
-->EXACTITUD criterio de exactitud
-->MAXIT número máximo de iteraciones
RESULTADOS:
-->X la raiz aproximada o mensaje de falla
*/
//función de la cual se quiere hallar una raiz
double F(double x){return (pow(x,3))*(exp(-x+1))+(5*(pow(x,2))*cos(2*x+1))-7;}

double falsa_posicion(double a, double b,int MAXIT,double TOL){
  doc = fopen("iteraciones Falsa posicion.txt","a++");
   int cont=1;
   double fa=F(a);
   double fb=F(b);
   double c;//punto entre a y b
   double fc;//F(c)
   while(cont<MAXIT){
        fc=F(c);
       cout<<a<<"\t"<<b<<"\t\t"<<c<<"\t\t"<<fa<<"\t"<<fb<<"\t"<< c <<endl;
       fprintf(doc, "%d\t%d\t%d\t%d\t%d\t%d\n",a,b,c,F(a),F(b),F(c) );
       c=(a*F(b)-b*F(a))/(F(b)-F(a));//formula de la falsa posicion
       if(abs(fc)<=EXACTITUD){
           return c;//raiz encontrada
       }
       if(abs(b-a)<=TOL){
           c=(a+b)/2;
           return c;//raiz encontrada
       }
       if(fc*fb>0)
           a=c;
       if(fa*fc>0)
           b=c;
       cont=cont+1;
     }
     fclose(doc);
     return c;
   }

int main (int argc, char *argv[]) {
    cout<<setprecision(6);
   //exactitud y tolerancia cercanas a cero
   cout<<falsa_posicion(-0.5,2.05,10,0.001);//retorna la raiz
   return 0;
}
