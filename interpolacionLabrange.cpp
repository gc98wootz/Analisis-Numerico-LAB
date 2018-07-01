#include <iostream>
#include <vector>
using namespace std;

struct Point{
  typedef double p_coord;
  p_coord x;
  p_coord y;
  Point(){}
  Point(p_coord a,p_coord b): x(a), y(b){}
};

typedef vector<Point> vPoints;
void interLabrange(vPoints &V,double &X){
  int tam = V.size();
  double numerator;
  double denominator;
  double total=0;
  double L;
  for(int i=0;i<tam;i++){
    numerator=1;
    denominator=1;
    for(int j=0;j<tam;j++){
      if(i!=j){
        numerator *=X-V[j].x;
        denominator =V[j].x - V[j].x;
      }
    }
    L=(numerator/denominator)*V[i].y;
    total+=L;
  }
  cout<<X<<" "<<total<<endl;
}


/*class Point{
private:
  double x,y;
public:
  Point(double a,double b){
    x=a;y=b;
  }
};*/

/*void labrange(vector x,vector y){
  int n=x.size();
  double p=0;
  for(int i=0;i<n;i++){
    double L=1;
    for(int j=1;j<n-1;j++){
      if(i!=j){
        L=((1-x(j))/(x(i)-y(j)));
      }
    }
    p=p+y(i)*L;
  }
}*/

int main(int argc, char const *argv[]) {
  Point a(2,4);
  Point b(5,1);
  vPoints v={a,b};
  double x=2;
  interLabrange(v,x);
  return 0;
}
