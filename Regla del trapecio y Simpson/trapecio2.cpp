#include <iostream.h>
#include <iomanip.h>

double f(double x) // aqui intoduces la funcion que quieres integrar
{
return x*x;
}

int main()
{
double h = 0.25,a = 3,b = 6,sum;
sum = (f(a)+f(b))/2.0;
for(double x = a + h;x < b;x += h)
sum += f(x);
sum = sum*h;
cout << "integral = " << sum << endl << endl;
cout << "end of ptogram - good bye ! ! !" << endl;
return 0;
} // MAIN

// con los datos del programa obtendras integral = 63.0312
// la integral excata seria ; [x^3/3] entre 3 y 6 = 63.00
