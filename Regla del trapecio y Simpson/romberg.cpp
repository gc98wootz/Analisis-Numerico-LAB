#include <iostream>
#include <math.h>
#include <stdlib.h>
#define pi 3.14159265358979
using namespace std;


float funcion(float x){
  return sin(x);
  //return pow(x,2);
}

float trapecio(float (*f)(float),float a, float b, int n)
{
  float h=(b-a)/n;
  float sumatoria=0;
  for (int j=0;j<n;j++)
    sumatoria=sumatoria+funcion(a+j*h);

  return (h/2)*(funcion(a)+2*sumatoria+funcion(b))*-1;
}



int main(int argc, char const *argv[]) {
  double a[][];
  for(int n=2;n<6;n++){
    cout<<"TRAPECIO\t"<<trapecio(funcion,pi/2,0,n)<<endl;
  }
  romberg();
  return 0;
}
