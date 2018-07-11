#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265358979
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
    for(int i=2;i<N;i++){
      for(int j=2;j<N;j++){
        cout<<r[i][j]<<"\t";
      }
      cout<<endl;
    }
    return -1*r[N][N];
}

double f(double x) {
    return sin(x);
}

int main()
{

    //for(int i=2;i<6;i++)
    cout << romberg(f, pi/2,0 ,5) << endl;
}
