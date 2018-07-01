#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265358979

using namespace std;


float funcion(float x)
{
return sin(x);
}

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

int main(int argc, char const *argv[]) {
  cout<<Simpson1_3(pi,0,6)<<endl;
  return 0;
}
