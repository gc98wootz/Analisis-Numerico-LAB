#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265358979

using namespace std;
/*int n,i,c;
float a,b,h,s1,s2,stt;*/

float funcion(float x)
{
return sin(x);
}
void Simpson3_8(float a,float b,int n){
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
  cout<<S0<<endl;
  cout<<S1<<endl;
  sumatoria=(((3*h)/8)*(funcion(a)+S0+S1+funcion(b)));
  cout<<sumatoria<<endl;
}

int main(int argc, char* argv[])
{
/*
cout <<"Dame a,b y n" << endl;
cout <<"n debe ser un multiplo de 3" << endl;
cin >> a >> b >> n;
h=(b-a)/n;
i=0;
s2=0;


for (i=1;i<n-1;i++)
{
   c= i%3;

  if (c=0)

   s1=s1+2*f(a+i*h);
   else
   s2=s2+3*f(a+i*h);
}
stt=(((3*h)/8)*(f(a)+s1+s2+f(b)));
cout<<"S1:"<<s1<< endl;
cout<<"S2:"<<s2<< endl;
 cout<<"El area es:"<<stt<< endl;


system("pause");
 return 0;*/
 Simpson3_8(pi,0,6);
}
