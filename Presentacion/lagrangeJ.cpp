
//Lagrange (x,y,r)
//devuelve p(r) donde p es el polinomio interpolar de (x0,y0), .. , (xn,yn)


#include <iostream>
#include "vector"
using namespace std;


struct Puntos{
  double x;
  double y;
  Puntos(){};
  Puntos(double a,double b):x(a),y(b){};
};
typedef vector<Puntos> vPunto;
void Lagrange(vPunto &V,double &r){
  int n=V.size();
  double total=0;
  double L,num,den;
  for(int i=0;i<n;i++){
    L=1;num=1;den=1;
    for(int j=0;j<n;j++){
      if(i!=j){
        num *=r-V[j].x;
        //scout<<num<<endl;
        den *=V[i].x -V[j].x;
        //cout<<V[i].x<<" "<<V[j].x<<endl;
        //cout<<den<<endl;
        L=(num/den)*V[i].y;
        //cout<<L<<endl;
      }
    }
    total +=L;
    }
  cout<<total<<endl;
}


int main(int argc, char const *argv[]) {
  Puntos a(1,2);
  Puntos b(0,1);
  Puntos c(-1,1);
  vPunto vect={a,b,c};
  double p=1;
  double x=3;
  double y=5;
  double z=7;
  Lagrange(vect , p);
  Lagrange(vect , x);
  Lagrange(vect , y);
  Lagrange(vect , z);
  /*
  Puntos e(-2,13);
  Puntos f(1,1);
  Puntos g(-1,-1);
  Puntos h(0,-1);
  Puntos i(2,17);
  vPunto vect2={e,f,g,h,i};
  double q=4;
  Lagrange(vect2 , q);*/
  return 0;
}
