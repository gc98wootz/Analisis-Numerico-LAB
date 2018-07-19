#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265358979

using namespace std;

float funcion(float x)
{
  //return cos(2*x);
  return exp(cos(2*x));
  //return sin(x*x);
  //return pow(x,4);
}

float trapecio(float a, float b, int n)
{
  float h=(b-a)/n;
  float sumatoria=0;
  for (int j=0;j<n;j++)
    sumatoria=sumatoria+funcion(a+j*h);

  return (h/2)*(funcion(a)+2*sumatoria+funcion(b))*-1;
}

void romberg(float a,float b,int n){
  double h[n+1], r[n+1][n+1];
  for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++)
      r[i][j]=0;
  }
  for(int i=1;i<n+1;i++){
    for(int j=2;j<n+1;j++)
      r[i][1]=trapecio(a,b,i);
  }
  for (int i = 2; i < n + 1; ++i) {
      for (int j = 2; j <= i; ++j) {
          r[i][j] = r[i][j - 1] + (r[i][j - 1] - r[i - 1][j - 1]) / (pow(4, j - 1) - 1);
      }
  }
  for(int i=2;i<n+1;i++){
    for(int j=2;j<n+1;j++)
      cout<<r[i][j]<<"\t";
    cout<<endl;
  }

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
   sumatoria=(h*(funcion(a)+4*S1+2*S0+funcion(b))/3.0)*-1;
    return sumatoria;
}

float Simpson38(float a, float b,int n ){
    float value;
    float h = (b - a)/ n;
    float sum = funcion(a) + funcion(b);
    for (int i = 1 ; i < n ; i++) {
        if (i % 3 == 0)
            sum += 2 * funcion(a + i * h);
        else
            sum += 3 * funcion(a + i * h);
    }
    return ( 3 * h / 8 ) * sum ;
}

/*
float Simpson38(float a, float b,int n ){
    float value;
    float h = (b - a)/ n;
    float sumA=0,sumB=0,sumC=0;
    float limite1 =(n/3)-1;
    float limite2=n/3;
    float x=b;
    float ih=3*h;
    for(int i=1;i<=limite1;i++){
      x+=ih;
      sumA+=funcion(x);}
    x=b+h;
    for(int i=1;i<=limite2;i++){
      sumB+=funcion(x);
      x+=ih;
    }
    x=b+(h*2);
    for(int i=1;i<=limite2;i++){
        sumC+=funcion(x);
        x+=ih;
      }
    x=b+(2*h);
    return ( 3 * h / 8 ) *(funcion(a)+(2*sumA)+(3*sumB)+(3*sumC)+funcion(b));
}*/
int main(){
  //float (*f)(float);
  //f= funcion;
  /*cout<<"\t N\t\ttrapecio\tsimpson1/3\tsimpson3/8"<<endl;
  for(int i=3;i<36;i+=6){
    cout<<"\t"<<i<<"\t\t"<<trapecio(pi/2,0,i)<<"\t\t"<<Simpson1_3(pi/2,0,i)<<"\t\t"<<Simpson38(0,pi/2,i)<<endl;
  }*/
  /*cout<<"Resultado TRAPECIO :\t" <<trapecio(pi/2,0,96)<<endl;
  cout<<"Resultado Simpson 1/3 :\t"<<Simpson1_3(pi/2,0,96)<<endl;
  cout<<"Resultado Simpson 3/8 :\t"<<Simpson3_8(pi/2,0,96)<<endl;*/
  //cout<<funcion(pi/2);
/*  for(int i=2;i<=12;i+=2)
    cout<<Simpson38(0,1,i)<<endl;
*/
  cout<<Simpson38(pi*-1,pi,15)<<endl;
  //romberg(pi/2,0,9);
  return 0;
}
