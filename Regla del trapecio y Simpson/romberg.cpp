#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 4
#include <iostream>
#define pi 3.14159265358979

using namespace std;

float funcion(float x)
{
  //return sin(x);
  //return pow(x,4);
  return exp(-2*x);
}

float trapecio(float a, float b, int n)
{
  float h=(b-a)/n;
  float sumatoria=0;
  for (int j=0;j<n;j++)
    sumatoria=sumatoria+funcion(a+j*h);

  return (h/2)*(funcion(a)+2*sumatoria+funcion(b))*-1;
}
int main()
{
    double s[MAX];
    int i,k;
    double var ;
    for (i = 1; i< MAX; i++)
      s[i] = 1;
    for (k=1; k< MAX; k++)
    {
      for (i=1; i <=k; i++)
      {
        if (i==1)
        {
          var = s[i];
          s[i] = trapecio(0,1,MAX);
          //s[i] = Trap(0, 1, pow(2, k-1)); // sub-routine trapeze
        } // integrated from 0 a pow() is the number
        else
        {
          s[k]= ( pow(4 , i-1)*s[i-1]-var )/(pow(4, i-1) - 1);
          var = s[i];
          s[i]= s[k];
        }
        for (i=1; i <=k; i++)
          printf (" %f ", s[i]);
      }
      //printf (" %f ", s[MAX-1]);
      /*for (i=1; i <=k; i++)
        printf (" %f ", s[i]);
      printf ("\n");*/
}

return 0;
}
