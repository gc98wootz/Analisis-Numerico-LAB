#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]) {
  cout.precision(0);
  cout.setf(ios::fixed);
  int i,n,flag=0,count=0,l=1,e=1;
  cout<<"\nGaus Jordan\n"<<endl;
  cout<<"\n Introduzca el numero de ecuaciones: \n";
  cin>>n;
  double a[n][n+1];
  double x[n];
  double eps,y;
  cout<<"\n Introduzca los elementos de la matriz: \n";
  for( i=0;i<n;i++){
    for(int j=0;j<=n;j++){
      cout<<"["<<i+1<<"]"<<"["<<j+1<<"]= ";
      cin>>a[i][j];
    }}
    //x[i]=0;
  x[i]=0;
  eps=0.1;
  cout<<"\nGaus Seidel\n";
  cout<<"\n Tu matriz es la sig: \n";
  for(int i=0;i<n;i++){
      cout<<"\nx"<<l++<<"= ";
    for(int j=0;i<=n;j++){
    if(j==n){
      cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);  }
    else{
      cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}
    }}
    for(int i=0;i<n;i++)
      for(int k=i+1;k<n;k++)
        if(abs(a[i][i])<abs(a[k][i]))
          for(int j=0;j<=n;j++){
            double tmp=a[i][j];
            a[i][j]=a[k][j];
            a[k][j]=tmp;
          }

    cout<<"\n";
    cout<<"Matriz despues de aplicar la diagonal dominante por gaus seidel";
    for(int i=0;i<n;i++){
      cout<<"\nx"<<e++<<" ";
      for(int j=0;j<=n;j++){
     if(j==n){
          cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);
        }else{
          cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<setw(2);
        }
      }
    }
    cout<<endl;
    cout<<"\n\tGaus Seidel\n";
    cout<<"iterancion Nro: "<<setw(9);
    for(int i=0;i<n;i++){
      cout<<"x"<<i+1<<setw(18);
    }
    cout<<endl;
    do{
      cout<<"\n"<<count+1<<"."<<setw(16);
      for(int i=0;i<n;i++){
        y=x[i];
        x[i]=a[i][n];
        for(int j=0;j<n;j++){
          if(j!=i)
          x[i]=x[i]-a[i][j]*x[j];
        }
        x[i]=x[i]/a[i][i];
        if(abs(x[i]-y)<=eps)
          flag++;
        cout<<"|"<<x[i]<<"|"<<setw(18);
      }
      cout<<"\n";
      count++;
    }while(flag<n);
    cout<<"\n LA solucion es la sig: \n";
    for(int i=0;i<n;i++)
      cout<<"x"<<i+1<<" = "<<x[i]<<endl;
    system("PAUSE");
      return 0;
  }
