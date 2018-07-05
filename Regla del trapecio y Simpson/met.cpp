#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
void romberg(double f(double), double a, double b, int n, double **R);

double F (double x)
{
  return pow(x,2);
}

double G (double x)
{
   return (exp(x));
}


 void romberg(double f(double), double a, double b, int n, double **R)
{
  double h, sum;
  h = b - a;

  R[0][0] = 0.5 * h * (f(a) + f(b));
  printf(" R[0][0] = %f\n", R[0][0]);

  for (int i = 1; i <= n; i++)
  {
     h *= 0.5;
     sum = 0;
     for (int k = 1; k <= pow(2,i)-1; k+=2)
     {
       sum += f(a + k * h);
     }
     R[i][0] = 0.5 * R[i-1][0] + sum * h;
     printf(" R[%d][0] = %f\n", i, R[i][0]);
     for (int j = 1; j <= i; j++)
     {
       R[i][j] = R[i][j-1] + (R[i][j-1] - R[i-1][j-1]) / (pow(4,j)-1);
       printf(" R[%d][%d] = %f\n", i,j, R[i][j]);
     }
   }
}

int main()
{
  double n = 10;
  double **R;
  double F(double), G(double), P(double);

  //R = calloc((n+1), sizeof(double ));
  R = new double(n+1);
/*  for (int i = 0; i <= n; i++)
    R[i] = calloc((n+1), sizeof(double));
  printf("The first function is F(x) = 1/(1 + x)\n");
  romberg(F, 0.0, 2.0,3, R);
  /*printf("The second function is G(x) = exp(x)\n");
  romberg(G,-1.0, 1.0, 4, R);
  printf("The third function is P(x) = sqrt(x)\n");
  romberg(P,0.0, 1.0, 7, R);
  return 0;
}*/
#include "bits/stdc++.h"

using namespace std;


double romberg(double (*func)(double), double a, double b,int N) {
    double h[N+1], r[N+1][N+1];
    for (int i = 1; i < N + 1; ++i) {
        h[i] = (b - a) / pow(2, i - 1);
    }
    r[1][1] = h[1] / 2 * (func(a) + func(b));
    for (int i = 2; i < N + 1; ++i) {
        double coeff = 0;
        for (int k = 1; k <= pow(2, i - 2); ++k) {
            coeff += func(a + (2 * k - 1) * h[i]);
        }
        r[i][1] = 0.5 * (r[i - 1][1] + h[i - 1] * coeff);
    }

    for (int i = 2; i < N + 1; ++i) {
        for (int j = 2; j <= i; ++j) {
            r[i][j] = r[i][j - 1] + (r[i][j - 1] - r[i - 1][j - 1]) / (pow(4, j - 1) - 1);
        }
    }
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        cout<<r[i][j]<<endl;
      }
      cout<<endl;
    }
    return r[N][N];
}

double f(double x) {
    return pow(x,2);
}

int main()
{
    for(int i=2;i<6;i++)
    cout << romberg(f, 1, 10,i) << endl;
}
