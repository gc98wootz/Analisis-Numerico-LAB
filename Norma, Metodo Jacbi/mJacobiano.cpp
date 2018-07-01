#include <iostream>
#define n 10
 using namespace std;

 void Jacobi(int l,float x[],float a[][10],float b[]);
 int main(int argc, char const *argv[]) {
   int i,j,l,cont=0;
   float x[n],a[n][n],b[n],dd ,suma;
   cout<<"Introduce el numero de Ecuaciones : ";
   cin>>l;
   cout<<"Introduce la matriz con los coeficientes: "<<endl;
   for(i=0;i<l;i++){
     x[i]=0;
     for(j=0;j<l;j++){
       cout<<"a["<<i<<","<<j<<"]= ";
       cin>>a[i][j];
     }
   }
   cout<<"Introduce el vector de los resultados: "<<endl;
   for(i=0;i<l;i++){
     cout<<"b["<<i<<",0]= ";
     cin>>b[i];
   }
   for(i=0;i<l;i++){
     suma=0;
     for(j=0;j<l;j++){
         if(i==j){
           dd=a[i][j];
         }else {
           suma+=a[i][j];
       }
       if(dd>suma){
         cont++;
       }
     }
     if(cont==l){
       Jacobi(l,x,a,b);
     }else {
       cout<<"La matriz no es diagonalmente";
     }
   }
   return 0;
 }
 void Jacobi(int l,float x[],float a[][10],float b[]){
   float c[n];
   int k,i,j;
   line:
   for(k=0;k<10;k++){
     for(i=0;i<l;i++){
       c[i]=b[i];
       for(j=0;j<l;j++){
         if(i!=j){
           c[i]=c[i]-a[i][j]*x[j];
         }
       }
     }
    for(i=0;i<n;i++){
      x[i]=c[i]/a[i][i];

    }
   }
   cout<<"La solucion es : "<<endl;
   for(i=0;i<l;i++){
      cout<<"x("<<i<<")= "<<x[i]<<endl;
  }

  }
