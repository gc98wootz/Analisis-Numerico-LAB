#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    float matriz[10][10], vector[10], x[10], y[10];
    int n = 0, iteraciones = 0, i = 0, j = 0;
    cout<<"\n\t Gaus Seidel \n";
    cout << "Introduzca el tamano de la matriz : ";
    cin >> n;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Ingrese valores:(" << i << ", " << j << ") ";
            cin >> matriz[i][j];
          }
    }
    cout << "\nIngrese los valores del vector\n";
    for (i = 0; i < n; i++){
        cout << "Ingrese valores :(" << i << ") ";
        cin >> vector[i];
    }
    cout<<endl;
    cout << "Valores inciales del Vector\n";
    for (i = 0; i < n; i++){
      cout << "Ingrese los valores :(" << i<<"):";
      cin >> x[i];
    }
    cout << "\nNumero de iteraciones : ";
    cin >> iteraciones;
    int cont=1;
    //Bucle para realizar el metodo Gaus Siedel
    while (iteraciones > 0)  {
        for (i = 0; i < n; i++){
            y[i] = (vector[i] / matriz[i][i]);
            cout<<cont<<"\t";
            for (j = 0; j < n; j++){
                if (j == i)
                    continue;
                y[i] -= ((matriz[i][j] / matriz[i][i]) * x[j]);
                x[i] = y[i];
            }
            cout<<"x"<<i+1<<"="<<y[i]<<"\t\t";
        }
        cont++;
        cout << "\n";
        iteraciones--;
    }
    return 0;
}
