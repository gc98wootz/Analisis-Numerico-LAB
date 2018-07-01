#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    cout.precision(4);

    int n,i,j,k,error=0,count=0;
    cout<<"\nIntroduzca el numero de ecuaciones:\n";
    cin>>n;
    double a[n][n+1];
    double x[n];
    double eps,y;
    cout<<"\nIntroduzca los elementos de la matriz::\n";
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"]= ";
            cin>>a[i][j];}
    cout<<"\nIntroduzca valores iniciales de las variables:\n";
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nIngrese error de finalizacion:\n";
    cin>>eps;
    cout<<endl;
    for (i=0;i<n;i++)                    //Pivotización (parcial) para hacer que las ecuaciones sean diagonalmente dominantes
        for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++){
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    cout<<"Iteracion"<<setw(10);
    for(i=0;i<n;i++)
        cout<<"x"<<i<<setw(18);
    int tmp;
    do                            //Realice iteraciones para calcular x1, x2, ... xn
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++){                //bucle que calcula x1, x2, ... x{
            y=x[i];
            x[i]=a[i][n];
            for (j=0;j<n;j++){
                if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
            }
            x[i]=x[i]/a[i][i];
            if (abs(x[i]-y)<=eps){          //Compare el valor  con el último valor
                error++;
                tmp=abs(x[i]-y);
              }
            cout<<x[i]<<setw(18);
        }
        cout<<"\n";
        count++;
      }while(error<n);                        //Si los valores de todas las variables no difieren de sus valores anteriores con un error mayor a eps, entonces la bandera debe ser n y, por lo tanto, detener el ciclo
    cout<<"\n La solucion es la siguiente:\n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;
    return 0;
}
