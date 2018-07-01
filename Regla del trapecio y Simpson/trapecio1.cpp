#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.141592653589793238462643383279502884197169399375105820974

using namespace std;



float funcion(float x)
{
return sin(x);
}

float trapecio(float a, float b, int n)
{
  float h=(b-a)/n;
  float sumatoria=0;
  for (int j=0;j<n;j++)
    sumatoria=sumatoria+funcion(a+j*h);

  return (h/2)*(funcion(a)+2*sumatoria+funcion(b));
}
float trapecio_(float a, float b)
{
return (b-a)*(funcion(a)+funcion(b))/2;
}
float simpson13_(float a,float b){
  float h=(b-a)/2;
  float c= a + h;
  return ((h)/3)*(funcion(a)+(4*funcion(c))+funcion(b));
}

float simpson13(float a,float b,int n){
  float h=(b-a)/n;
  float sumatoria=0;
  float c = a + h;
  for(int i =0;i<n;i++){
    sumatoria += funcion() ;
  }
  return
}
int main(){
  //float (*f)(float);
  //f= funcion;
  cout<<"Resultado TRAPECIO " <<trapecio(pi,0,6)<<endl;
  return 0;
}
