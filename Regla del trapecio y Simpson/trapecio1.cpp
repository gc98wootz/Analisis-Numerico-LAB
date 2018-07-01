#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265358979

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

/*float trapecio_(float a, float b){
return (b-a)*(funcion(a)+funcion(b))/2;
}*/


float Simpson1_3(float a,float b,int n){
   float sumatoria=0;
   float x;
   float S0,S1;
   float h;
   h=(b-a)/(2*n);
   S0=S1=0;
   for(int i=1;i<=(2*n-1);++i){
     x=a+((float)i)*h;
     if(!(i%2))
  	S0+=funcion(x);
     else
  	S1+=funcion(x);
   }
   sumatoria=(h*(funcion(a)+4*S1+2*S0+funcion(b))/3.0);
    return sumatoria;
}
float Simpson3_8(float a,float b,int n){
  float sumatoria=0;
  float h;
  float S0,S1;
  h=(b-a)/n;
  S0=S1=0;
  for(int i=1;i<n-1;i++){
    if(i%3)
      S0+=2*funcion(a+i*h);
    else
      S1+=3*funcion(a+i*h);
  }
  //cout<<S0<<endl;
  //cout<<S1<<endl;
  sumatoria=(((3*h)/8)*(funcion(a)+S0+S1+funcion(b)));
  //cout<<sumatoria<<endl;
  return sumatoria;
}

int main(){
  //float (*f)(float);
  //f= funcion;
  cout<<"Resultado TRAPECIO :\t" <<trapecio(pi,0,6)<<endl;
  cout<<"Resultado Simpson 1/3 :\t"<<Simpson1_3(pi,0,6)<<endl;
  cout<<"Resultado Simpson 3/8 :\t"<<Simpson3_8(pi,0,6)<<endl;
  return 0;
}
