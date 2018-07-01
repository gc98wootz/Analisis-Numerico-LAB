#include <iostream>
#include <cmath>
using namespace std;
double f1(int n){
  return ((n^3)-2*n+4)/(2*(n^3)+1);
}//1//4
double f2(int n){
  return 2/((3^(3^n))+n^2);
}//3/// 2/3
double f3(int n){
  double a=2;
  double fact=2;
  for (int i=3; i < n; i++) {
    a=a+(1/fact);
    fact=fact*i;
  }
  return a;
}//1  //00
double f4(int n){
  return 1/n^3;
}//1 //0


int main(int argc, char const *argv[]) {
  double var,var1,var2,var3;
  double n=1;
  var=(log((abs(f1(n+1))-4)/(abs(f1(n))-4)))/(log((abs(f1(n))-4)/(abs(f1(n-1))-4)));
  cout<<"Funcion 1 :"<<endl;
  cout<<var<<endl;
  var1=(log((abs(f2(n+1))-(2/3))/(abs(f2(n))-(2/3))))/(log((abs(f2(n))-(2/3))/(abs(f2(n-1))-(2/3))));
  cout<<"Funcion 2 :"<<endl;
  cout<<var1<<endl;
  var2=(log((abs(f3(n+1))-1)/(abs(f3(n))-1)))/(log((abs(f3(n))-1)/(abs(f3(n-1))-1)));
  cout<<"Funcion 3 :"<<endl;
  cout<<var<<endl;
  var=(log((abs(f4(n+1))-0.5)/(abs(f4(n))-0.5)))/(log((abs(f4(n))-0.5)/(abs(f4(n-1))-0.5)));
  cout<<"Funcion 4 :"<<endl;
  cout<<var;
  return 0;
}
