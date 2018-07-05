#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

void sumamat();
void restamat();
void inversa();
void cramer();
void gaussjordan();
void montante();
void jacobi();
void gaussseidel();
void primerorden();
void segundoorden();
void dsuces();
void ili();
void newton();
void bailey();
void falsi();
void bv();
void lb();
void UniqueInterpolatingPolynomial();
void Lagrange();
void Newtonback();
void Newtonfwrd();
void AitkenNeville();
void poli();
void expo();
void cofind();
void trapecios();
void simpson();
void newton38();
void romberg();
void eu();
void rk2a();
void rk2b();
void rk3();
void rk4a();
void rk4b();
void escalar();
void mmult();
void dete();
void inv();

int main()
{
	int o;
	cout<< "PROGRAMA CON LA CORRECCION DE SUMA Y RESTA DE DOS MATRICES" <<endl << "RAFAEL ENCINAS" <<endl<<"RAFAEL MENA"<<endl;
	cout << "Elija un programa:" << "\n" << "Suma de dos matrices ----- 1" <<"\n" << "Resta de dos matrices ----- 2"<<"\n" << "Producto de una matriz y un escalar----- 36"<<"\n" << "Producto de dos matrices----- 37"<<"\n" << "Determinante de una matriz----- 38"<<"\n" << "Matriz inversa----- 39";
	cout << endl;
	cout<<"Programa para solucionar ecuaciones lineales por 6 metodos diferentes"<<endl;
	cout<<"Elija metodo de solucion: \n"<<endl<<"Matriz inversa ---> 3 \n"<<"Metodo de Cramer -> 4\n"<<"Gauss Jordan   ---> 5\n";
	cout<<"Metodo Montante --> 6 \n"<<"Metodo de Jacobi -> 7\n"<<"Gauss Seidel   ---> 8 \n"<<endl;
cout<<"Este programa encuentra las soluciones para las ecuaciones : \n f(x,y) = x^2 + y^2 -9 , g(x,y) = (x^2)/16 + (y^2)/4  -1\n"<<endl;
cout<<"Elija programa\n"<<"Newton Primer Orden --->9\n"<<"Newton Segundo Orden -->10\n";
	cout<<"		Encontrar altura del agua en un abrebadero"<<endl;
	cout<<"Metodo de disecciones sucesivas --> 11"<<endl;
	cout<<"Metodo de interpolacion lineal inversa --> 12"<<endl;
	cout<<"Metodo de Regula-falsi --> 13 "<<endl;
	cout<<"			Encontrar raiz cubica "<<endl;
	cout<<"Metodo de Bailey --> 14"<<endl;
	cout<<"Metodo de Newton-Raphson --> 15"<<endl;
	cout<<endl;
	cout<<"Programa para calcular raices de polinomios\n\n";
	cout<<"Elija un metodo : \n\n";
	cout<<"Bierge vieta ----> 16"<<endl;
	cout<<"Lin-Bairstow ----> 17"<<endl;
	cout<<"Metodos de interpolacion"<<endl;
	cout<<"Eliga metodo: \n";
	cout<<"Uniquie Interpolatin Polynomial ------> 18"<<endl;
	cout<<"Lagrange                        ------> 19"<<endl;
	cout<<"Newton Backwards                ------> 20"<<endl;
	cout<<"Newton Forward                  ------> 21"<<endl;
	cout<<"AitkenNeville                   ------> 22"<<endl;
	cout<<"El siguiente programa crea aproximaciones por medio de curvas"<<endl;
	cout<<"Elija el metodo"<<endl;
	cout<<"Aproximacion a polinomio (grado 3) --->23"<<endl;
	cout<<"Aproximacion a exponencial         --->24"<<endl;
	cout<<"Este programa encuentra la solucion a integrales ya dadas por distintos metodos\n\n";
cout<<"Resolver la integral de (1 + x^3)dx por el metodo de:\n "<<endl;
cout<<"\tCoeficientes indeterminados -------> 25\n"<<endl;
cout<<"Resolver la integral de (x^2 * e*x)dx por el metodo de :\n"<<endl;
cout<<"\tRegla del trapezoide        -------> 26\n";
cout<<"\tRegla del 1/3 de Simpson    -------> 27\n";
cout<<"\tRegla del 3/8 de Newton     -------> 28\n"<<endl;
cout<<"Resolver la integral de (1/(1 + x^2))dx por el metodo de:\n "<<endl;
cout<<"\tMetodo de Romberg           -------> 29\n"<<endl;
cout<<"\t  ---- Programa para resolver la ecuacion diferencial x*y ----"<<endl;


	cout<<"Elija metodo : \n";
	cout<<"Metodo de Euler                  -----> 30\n";
	cout<<"Runge-Kuta 2do orden caso A 	 -----> 31\n";
	cout<<"Runge-Kuta 2do orden caso B 	 -----> 32\n";
	cout<<"Runge-Kuta Tercer orden          -----> 33\n";
	cout<<"Runge-Kuta 4to orden caso A 	 -----> 34\n";
	cout<<"Runge-Kuta 4to orden caso B 	 -----> 35\n";
	cin>>o; 

   switch(o){
    	case(1):
    		sumamat();
    		break;
    	case(2):
    		restamat();
    		break;
    		case (3) :
	inversa();
	break;
	
	case (4) :
	cramer();
	break;
	
	case (5) :
	gaussjordan();
	break;
	case (6) :
	montante();
	break;
	case (7) :
	jacobi();
	break;	
	case (8) :
	gaussseidel();
	break;
	case (9):
		primerorden();
		break;
	case (10):
		segundoorden();
		break;
	case (11):
			dsuces();
		break;
		case (12):
			ili();
		break;
		case (13):
			falsi();
		break;
		case (14):
			bailey();
		break;
		case (15):
			newton();
		break;
		case(16):
			bv();
			break;
		case(17):
			lb();
			break;
    		case (18):
		UniqueInterpolatingPolynomial();
		break;

		case (19):
			Lagrange();
			break;
		
		case (20):
			Newtonback();
			break;
			
		case (21):
			Newtonfwrd();
			break;
			
		case (22):	
			AitkenNeville();
			break;
			case (23):
			poli();
			break;
		case (24):
			expo();
			break;
			case (25):
	cofind();
	break;
	case (26):
	trapecios();
	break;
	case (27):	
	simpson();
	break;
	case (28):
	newton38();
	break;
	case (29):
	romberg();
	break;
	case(30):
			eu();
			break;
		case(31):
			rk2a();
			break;
		case(32):
			rk2b();
			break;
		case(33):
			rk3();
			break;
		case(34):
			rk4a();
			break;
		case(35):
			rk4b();
			break;
		case(36):
			 escalar();
			 break;
		case(37):
				mmult();
				break;
		case(38):
			dete();
			break;
		case(39):
			inv();
			break;
	
			default:
    		cout<< "Nel\n";
    		break;
    }
    
   system("Pause");
	
}

void sumamat(){
	int r, c, n,o,i,k,x,m,p;
	cout << "Ingrese la cantidad de renglones para ambas matrices.\n";
    cin>>n;
    cout<< "Ingrese la cantidad de columnas para ambas matrices.\n";
    cin>>m;
    
    float mat1[n][m];
    float mat2[n][m];
    float mat3[n][m];
    
    for(r = 0; r < n ; r++){
    	cout<< "Ingrese datos para el renglon " <<r+1 << " De la primera matriz" <<endl;  
    	for(x = 0; x < m ; x++){
    		cin>> mat1[r][x];

    	}
    }
     for(r = 0; r < n ; r++){
    	cout<< "Ingrese datos para el renglon " <<r+1 <<" De la segunda matriz"<< endl;  
    	for(x = 0; x < m ; x++){
    		cin>> mat2[r][x];
    	}
    }
     for(r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		mat3[r][x] = mat1[r][x] + mat2[r][x];
    	}
    }
    cout<< "Matriz 1" <<endl;
    for (r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		cout<<mat1[r][x];
    		cout<<"\t";
    	}
    	cout<<endl;
    }
     cout<< "Matriz 2" <<endl;
    for (r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		cout<<mat2[r][x];
    		cout<<"\t";
    	}
      	cout<<endl;
    }
    cout<< "Matriz resultande de la suma" <<endl;
    for (r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		cout<<mat3[r][x];
    		cout<<"\t";
    	}
    	cout<<endl;
    }
}
void restamat(){
	int r, c, n,o,i,k,x,m,p;
	
	cout << "Ingrese la cantidad de renglones para ambas matrices.\n";
    cin>>n;
    cout<< "Ingrese la cantidad de columnas para ambas matrices.\n";
    cin>>m;
    
    float mat1[n][m];
    float mat2[n][m];
    float mat3[n][m];
    
    for(r = 0; r < n ; r++){
    	cout<< "Ingrese datos para el renglon " <<r+1 << " De la primera matriz" <<endl;  
    	for(x = 0; x < m ; x++){
    		cin>> mat1[r][x];

    	}
    }
     for(r = 0; r < n ; r++){
    	cout<< "Ingrese datos para el renglon " <<r+1 <<" De la segunda matriz"<< endl;  
    	for(x = 0; x < m ; x++){
    		cin>> mat2[r][x];
    	}
    }
     for(r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		mat3[r][x] = mat1[r][x] - mat2[r][x];
    	}
    }
    cout<< "Matriz 1" <<endl;
    for (r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		cout<<mat1[r][x];
    		cout<<"\t";
    	}
    	cout<<endl;
    }
     cout<< "Matriz 2" <<endl;
    for (r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		cout<<mat2[r][x];
    		cout<<"\t";
    	}
      	cout<<endl;
    }
    cout<< "Matriz resultande de la resta" <<endl;
    for (r = 0; r < n ; r++){
    	for(x = 0; x < m ; x++){
    		cout<<mat3[r][x];
    		cout<<"\t";
    	}
    	cout<<endl;
    }
	
}
void inversa(){
	int n, x, y, i, j, a;
	float z,w;
	cout<<"Ingrese la cantidad de variables a encontrar (cantidad de ecuaciones)" << endl;
	cin>> n;
	
	float A[n][n];
	float B[n][n];
	float C[n];
	float auxa[n];
	float auxb[n];
	
		for (x = 0; x < n; x++){ // CREA 0 en aux
			auxa[x]=0;
			auxb[x]=0;
		}
	for (x = 0; x < n; x++){ // lllena matriz identidad
		for(y = 0; y < n; y++){
			B[x][y]=0;
		}
		B[x][x]=1;
	}
	
	for (x = 0; x < n; x++){ //llena matriz A
			cout<< "Ingrese los elementos del renglon " << x+1 << " De la matriz de coeficientes "<<endl;
		for(y = 0; y < n; y++){
			cin>> A[x][y];
		}
	}
	cout<< "Ingrese los elementos de la matriz de resultados "<<endl;
	for (x = 0; x < n; x++){ //llena matriz A		
			cin>>C[x];
	}
		cout<<"MATRIZ INGRESADA"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<A[x][y]<<"\t";
		}
		cout<<" | "<<C[x];
		cout<<endl;
	}
	for (x = 0; x < n; x++){
		if (A[x][x] == 0){
			for (y = x; y < n ; y++){
				if (A[y][x] == 0){
				}
				else {
					for (a = 0; a < n; a++){
					auxa[a]=A[y][a];
					auxb[a]=B[y][a];
					A[y][a]=A[x][a];
					B[y][a]=B[x][a];
					A[x][a]=auxa[a];
					B[x][a]=auxb[a];
				}
				}
			}
			
		}
	}
		for (x = 0; x<n;x++){ 
		z=A[x][x];
		for (y = 0; y < n; y++){
			A[x][y]=A[x][y] / z; // CONSIGUE EL 1 EN LA DIAGONAL
			B[x][y] = B[x][y] / z;
		}
		for (i=0; i < n; i++){
			if(i == x){
			}
			else if (i != x){
				w = A[i][x];
				for (j = 0 ; j < n ; j++){	
					A[i][j]= (A[i][j])-(w * A[x][j]);
					B[i][j]= (B[i][j])-(w * B[x][j]);
				}
			}
		}	
	}
	

		cout<<"MATRIZ INVERSA"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INVERSA
		for(y = 0; y < n; y++){
			cout<<B[x][y]<<"\t";
		}
		cout<<endl<<"\n";
	}
	cout<< "RESULTADOS"<<endl;
	for (x = 0; x < n; x++){
		w = 0;
		for (y = 0; y < n; y++){
			w = w + (C[y] * B[x][y]);	
		}
		cout<<" X"<<x<<" = "<<w<<endl;
	}
}
void cramer(){
	
	int n, x, y, i, j, a,p;
	p = 0;
	float z,w,q;
	float r=1;
	cout<<"Ingrese cantidad de variables (cantidad de ecuaciones)" << endl;
	cin>> n;
	
	float A[n][n];
	float AA[n][n];
	float B[n][n];
	float BB[n][n];
	float auxa[n];
	float mat1[n];
	float mat2[n];
	
		for (x = 0; x < n; x++){ // CREA 0 en aux
			auxa[x]=0;
			mat1[x]=0;
			mat2[x]=1;
		}
	for (x = 0; x < n; x++){ // lllena matriz identidad
		for(y = 0; y < n; y++){
			B[x][y]=0;
			BB[x][y]=0;
		}
		B[x][x]=1;
		BB[x][x]=1;
	}
	for (x = 0; x < n; x++){ //llena matriz A'
			cout<< "Ingrese los elementos del renglon " << x+1 <<" de la matriz de coeficientes"<<endl;
		for(y = 0; y < n; y++){
			cin>> A[x][y];
			AA[x][y]=A[x][y];
		}
	}
	cout<<"Ingrese la matriz de resultados"<<endl;
	for (x = 0; x<n ; x++){
		cin>>mat1[x];
	}
	
	cout<<"MATRIZ INGRESADA"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<AA[x][y]<<"\t";
		}
		cout<<"| "<<mat1[x]<<endl;
	}
	
	for (x = 0; x < n; x++){ // Cambia renglones tal que no hayan 0 en la diagonal
		if (A[x][x] == 0){
			for (y = x; y < n ; y++){
				if (A[y][x] == 0){
				}
				else {
					for (a = 0; a < n; a++){
					auxa[a]=A[y][a];
					A[y][a]=A[x][a];
					A[x][a]=auxa[a];
				}
				B[x][x]=B[x][x] * (-1);
				}
			}	
		}
	}
		for (x = 0; x<n;x++){
		z=A[x][x];
		for (y = 0; y < n; y++){
			A[x][y]=A[x][y] / z; // CONSIGUE EL 1 EN LA DIAGONAL
		}
		B[x][x]=B[x][x]*z;
		for (i=x; i < n; i++){
			if(i == x){
			}
			else if (i != x){
				w = A[i][x];
				B[i][x]= w;	
				for (j = 0 ; j < n ; j++){	
					A[i][j]= (A[i][j])-(w * A[x][j]);
				
				}
			}
		
		}	
	}
		cout<<endl;
	for (x = 0; x < n ; x++){ // DETERMINANTE DE LA MATRIZ INGRESADA
		r =r*B[x][x];
	}
		for (x = 0; x < n ; x++){
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){ //Cambia la columna de la matriz por la de los resultados
					A[i][j]=AA[i][j];
					B[i][j]=BB[i][j];
				}
				A[i][x]=mat1[i];
			}
			for (a = 0; a < n; a++){ // Cambia renglones tal que no hayan 0 en la diagonal
			if (A[a][a] == 0){
			for (y = a; y < n ; y++){
				if (A[y][a] == 0){
				}
				else {
					for (p = 0; p < n; p++){
					auxa[p]=A[y][p];
					A[y][p]=A[a][p];
					A[a][p]=auxa[p];
				}
				B[a][a]=B[a][a] * (-1);
				}
			}	
		}	
	}	
	for (a = 0; a<n;a++){
		z=A[a][a];
		for (y = 0; y < n; y++){
			A[a][y]=A[a][y] / z; // CONSIGUE EL 1 EN LA DIAGONAL
		}

		B[a][a]=B[a][a]*z;		
			for (i=a; i < n; i++){
			if(i == a){
			}
			else if (i != a){
				w = A[i][a];
				B[i][a]= w;	
				for (j = 0 ; j < n ; j++){	
					A[i][j]= (A[i][j])-(w * A[a][j]);
				
				}
			}
		
		}
	} 
		w = mat2[x];
			for (a = 0; a < n ; a++){
		w=w*B[a][a];
		}
		mat2[x]=w;
		}		
	cout<< "La DETERMINANTE de la matriz ingresada es = " << r;
		cout<<endl;
	
	cout<<"Los resultados para las incognitas son: "<<"\n\n";
	for (x = 0; x<n;x++){
		cout<<"X"<<x<<" = "<< mat2[x]<<"/"<<r<<" = " <<(mat2[x]/r) <<endl;
	}
	cout<<endl;	
}
void gaussjordan(){
		int n, x, y, i, j, a,m,p;
	float z,w;
	cout<<"Ingrese la cantida de variables a encontrar (cantidad de ecuaciones)" << endl;
	cin>> n;
	
	float A[n][n];
	float B[n];
	float auxa[n];
	float auxb=0;
	
		for (x = 0; x < n; x++){ // CREA 0 en aux
			auxa[x]=0;;
		}
	
	for (x = 0; x < n; x++){ //llena matriz A
			cout<< "Ingrese los elementos del renglon " << x+1 <<" de la matriz de coeficientes"<<endl;
		for(y = 0; y < n; y++){
			cin>> A[x][y];
		}
	}
		cout<<"Ingrese la matriz de resultados: "<<endl;
	for (x = 0; x < n; x++){ // llena matriz B de resultados
		cin>>B[x];
	}
		cout<<"MATRIZ INGRESADA"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<A[x][y]<<"\t";
		}
		cout<<"| "<<B[x]<<endl;
		}
	for (x = 0; x < n; x++){ //QUITA 0 DE LA DIAGONAL CAMBIANDO RENGLONES
		if (A[x][x] == 0){
			for (y = x; y < n ; y++){
				if (A[y][x] == 0){
				}
				else {
					for (a = 0; a < n; a++){
					auxa[a]=A[y][a];
					A[y][a]=A[x][a];
					A[x][a]=auxa[a];
				}
				auxb=B[y];
				B[y]=B[x];
				B[x]=auxb;
				}
			}
			
		}
	}
		
		for (x = 0; x<n;x++){ 
		z=A[x][x];
		B[x] = B[x] / z;
		for (y = 0; y < n; y++){
			A[x][y]=A[x][y] / z; // CONSIGUE EL 1 EN LA DIAGONAL
		}
		for (i=0; i < n; i++){ //CREA LOS 0 EXCEPTO EN LA DIAGONAL
			if(i == x){
			}
			else if (i != x){
				w = A[i][x];
				for (j = 0 ; j < n ; j++){	
					A[i][j]= (A[i][j])-(w * A[x][j]);
				}
				B[i]= (B[i])-(w * B[x]);
				
			}
		}	
	}
	
	cout<<"MATRIZ GAUSSIANA: "<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<A[x][y]<<"\t";
		}
		cout<<"| "<<B[x]<<endl;
	}
	
	cout<<"Los valores de las incognitas son: "<< endl;
	for(x=0;x<n;x++){
		cout<<"X"<<x<<" = "<<B[x]<<endl;
	}
}
void montante(){
	int n, x, y,w;
	cout<<"Ingrese el grado de la matriz" << endl;
	cin>> n;
	
	float A[n][n]; //guarda la matriz anterior
	float B[n][n]; 
	float mata[n]; //guarda matriz de resultados anterior
	float matb[n];

	for (x = 0; x < n; x++){ //llena matriz A
			cout<< "Ingrese los elementos del renglon " << x+1 <<" de la matriz de coeficientes"<<endl;
		for(y = 0; y < n; y++){
			cin>> A[x][y];
			B[x][y]=0;
		}
		matb[x]=0;
	}
	cout<<"Ingrese la matriz de resultados: "<<endl;
	for (x=0;x<n;x++){
		cin>>mata[x];
		matb[x]=mata[x];
	}
	cout<<"MATRIZ A"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<A[x][y]<<"\t";
		}
		cout<<endl;
	}
	for(x = 0; x<n ; x++){
		for (y = 0; y<n ; y++){ //iguala el renglon k de la siguiente matriz al de la pasada
			B[x][y]=A[x][y];
		}
		for (y = 0; y<n ; y++){ //crea 0 en la columna menos en la diagonal
			if (y == x){
			}
			else {
				B[y][x]=0;
			}
		}
		for (y = 0; y<n;y++){ //iguala el valor pasado de la diagonal
			B[y][y]=A[x][x];
		}
		for (y = 0; y<n; y++){ //hace el producto cruz
			if (y == x){
			}
			else {
				matb[y]=(mata[y]*A[x][x]) - (A[y][x]*mata[x]);
				if (x == 0){
				}
				else {
					matb[y]=matb[y] / A[0][0];
				}
			}
			for (w = x+1 ; w<n ; w++){
			if (y == x){
			}
			else {
				B[y][w]=(A[y][w]*A[x][x]) - (A[y][x]*A[x][w]);
				if (x == 0){
				}
				else {
					B[y][w]=B[y][w] / A[0][0];
				}
			}
		}
		}
		for (y = 0; y < n ; y++){
			for (w = 0; w<n; w++){
				A[y][w]=B[y][w];
			}
			mata[y]=matb[y];
		}
	}	
	cout<<"Matriz final: "<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<B[x][y]<<"\t";
		}
		cout<<"| "<<matb[x]<<endl;
		cout<<endl<<endl;
	}
cout<<"Los valores de las variables son: \n\n";
for(x = 0; x<n ; x++){
	cout<<"X"<<x<<" = "<<matb[x] / B[x][x] <<endl;
}	
}
void jacobi(){
		int n, x, y,a,i,w;
	float error=.1;
	float z;
	i=1;
	cout<<"Para este programa es necesario que la matriz ingresada tenga los coeficientes mas altos en la diagonal"<<endl;
	cout<<"Ingrese la cantida de variables a encontrar (cantidad de ecuaciones)" << endl;
	cin>> n;
	
	float A[n][n];
	float B[n];
	float sig[n];
	float ant[n];
	float auxa[n];
	float auxb=0;
	
		for (x = 0; x < n; x++){ // CREA 0 en aux
			auxa[x]=0;
			sig[x]=0;
		}
	
	for (x = 0; x < n; x++){ //llena matriz A
			cout<< "Ingrese los elementos del renglon " << x+1 <<" de la matriz de coeficientes"<<endl;
		for(y = 0; y < n; y++){
			cin>> A[x][y];
		}
	}
		cout<<"Ingrese la matriz de resultados: "<<endl;
	for (x = 0; x < n; x++){ // llena matriz B de resultados
		cin>>B[x];
	}
	cout<<"Ingrese cantidad maxima de iteraciones"<<endl;
	cin>>w;
	cout<<"Ingrese el error de convergencia"<<endl;
	cin>>error;
		cout<<"MATRIZ INGRESADA"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<A[x][y]<<"\t";
		}
		cout<<"| "<<B[x]<<endl;
		}
	for (x = 0; x < n; x++){ //QUITA 0 DE LA DIAGONAL CAMBIANDO RENGLONES
		if (A[x][x] == 0){
			for (y = x; y < n ; y++){
				if (A[y][x] == 0){
				}
				else {
					for (a = 0; a < n; a++){
					auxa[a]=A[y][a];
					A[y][a]=A[x][a];
					A[x][a]=auxa[a];
				}
				auxb=B[y];
				B[y]=B[x];
				B[x]=auxb;
				}
			}
			
		}
	}
	for(x = 0; x<n ; x++){
		z=A[x][x];
		for(y = 0; y<n ; y++){
		A[x][y]=(A[x][y])/(-z);
		}
		A[x][x]=0;
		B[x]=B[x] / z;
		ant[x]=B[x];
	}
	for(a = 0; a<n ; a++){
		for (y = 0; y<n ; y++){
		sig[a]=sig[a]+(ant[y]*A[a][y]);
		}
		sig[a]=sig[a]+B[a];
		}
	for (x = 0; x<n ; x++){
		while (abs(sig[x]-ant[x]) > error && w > i){ //Hace los pasos hasta que el error sea menor a error
			for (y = 0; y<n ;y++){
				ant[y]=sig[y];
			}
		for(a = 0; a<n ; a++){
				sig[a]=0;
				for (y = 0; y<n ; y++){
				sig[a]=sig[a]+(ant[y]*A[a][y]);
			}
			sig[a]=sig[a]+B[a];
		}
		i++;	
		}
}
if(i > w ){
	cout<<"El error no converge a "<<error<<" en "<<w<<" iteraciones"<<endl;
}
else{
cout<<endl<<" Se llego a los resultados en "<<i+1<<" iteraciones\n\n";
cout<<" Con un error de "<<error<<endl;
cout<<" Los valores de las variables son: \n\n";
for(x = 0; x<n ; x++){
	cout<<"X"<<x<<" = "<<sig[x]<</*"	Converge a = "<<round(sig[x])<<*/endl;
}
}
}
void gaussseidel(){
	int n, x, y,a,i,w;
	float error=.01;
	float z;
	i = 1;
	cout<<"Para este programa es necesario que la matriz ingresada tenga los coeficientes mas altos en la diagonal"<<endl;
	cout<<"Ingrese la cantida de variables a encontrar (cantidad de ecuaciones)" << endl;
	cin>> n;
	
	float A[n][n];
	float B[n];	
	float sig[n];
	float ant[n];
	float auxa[n];
	float auxb=0;
	float b[n];
	
		for (x = 0; x < n; x++){ // CREA 0 en aux
			auxa[x]=0;
			sig[x]=0;
			ant[x]=0;
			b[x]=0;
		}
	
	for (x = 0; x < n; x++){ //llena matriz A
			cout<< "Ingrese los elementos del renglon " << x+1 <<" de la matriz de coeficientes"<<endl;
		for(y = 0; y < n; y++){
			cin>> A[x][y];
		}
	}
		cout<<"Ingrese la matriz de resultados: "<<endl;
	for (x = 0; x < n; x++){ // llena matriz B de resultados
		cin>>B[x];
	}
	cout<<"Ingrese cantidad maxima de iteraciones"<<endl;
	cin>>w;
	cout<<"Ingrese error de convergencia"<<endl;
	cin>>error;
		cout<<"MATRIZ INGRESADA"<<endl;
	for (x = 0; x < n; x++){ //MUESTRA LA MATRIZ INGRESADA
		for(y = 0; y < n; y++){
			cout<<A[x][y]<<"\t";
		}
		cout<<"| "<<B[x]<<endl;
		}
	for (x = 0; x < n; x++){ //QUITA 0 DE LA DIAGONAL CAMBIANDO RENGLONES
		if (A[x][x] == 0){
			for (y = x; y < n ; y++){
				if (A[y][x] == 0){
				}
				else {
					for (a = 0; a < n; a++){
					auxa[a]=A[y][a];
					A[y][a]=A[x][a];
					A[x][a]=auxa[a];
				}
				auxb=B[y];
				B[y]=B[x];
				B[x]=auxb;
				}
			}
			
		}
	}

	for(x = 0; x<n ; x++){
		z=A[x][x];
		for(y = 0; y<n ; y++){
		A[x][y]=(A[x][y])/(-z);
		}
		A[x][x]=0;
		B[x]=B[x] / z;
	}
	for(a = 0; a<n ; a++){ //hace el primer paso
		for (y = 0; y<n ; y++){
		sig[a]=sig[a]+(ant[y]*A[a][y]);
		}
		sig[a]=sig[a]+B[a];
		ant[a]=sig[a];
		}
	for (x = 0; x<n ; x++){
		while (abs(sig[x]-b[x]) > error && w>i){ //Hace los pasos hasta que el error sea menor a error
			for (y = 0; y<n ;y++){
				b[y]=sig[y];
			}
		for(a = 0; a<n ; a++){
				sig[a]=0;
				for (y = 0; y<n ; y++){
				sig[a]=sig[a]+(ant[y]*A[a][y]);
			}
			sig[a]=sig[a]+B[a];
			ant[a]=sig[a];
		}
		i++;	
		}
}
if(i > w){
	cout<<"No el error no converge a "<<error<<" en "<<w<<" iteraciones"<<endl;
}
else{
cout<<endl<<" Se llego a los resultados en "<<i+1<<" iteraciones\n\n";
cout<<" Los valores de las variables son: \n\n";
for(x = 0; x<n ; x++){
	cout<<"X"<<x<<" = "<<sig[x]<</*"	Converge a = "<<round(sig[x])<<*/endl;
}
}
}
void primerorden(){
	int k;
	char o;
float x,y,dx,dy,f,g,fx,fy,gx,gy,error;
dx=dy=0;
error=.0000001;
k=1;

cout<<"Ingrese los valores iniciales para X y para Y (deben ser diferentes a 0)"<<endl;
cout<<"X = ";
cin>>x;
cout<<"\nY = ";
cin>>y;
cout<<"El error de aproximacion = "<<error<<" ¿Desea cambiarlo? Si(s) No(cualquier otra tecla)"<<endl;
cin>>o;
switch (o){
	case ('s'):
cout<<"Ingrese el error de aproximacion delta x, delta y"<<endl;
cin>>error;
	break;
	
	default:
		break;
}

f = (x*x)+(y*y)-9;
g = ((x*x)/16)+((y*y)/4)-1;
	
	
while (abs(f) > error || abs(g) > error){

fx = 2*x;
gx = x/8;
fy = 2*y;
gy = y/2;
dx = ((g*fy)-(f*gy))/((fx*gy)-(fy*gx));
dy = ((gx*f)-(fx*g))/((fx*gy)-(fy*gx));
cout<<"________________________________________________________________"<<endl;
cout<<"Iteracion "<<k<<"\n\n\t X = "<<x<<"\n\t Y = "<<y<<"\n\t f(x0 , y0) = "<<f<<"\n\t g(x0 , y0) = "<<g<<"\n\t fx = "<<fx<<"\n\t fy = "<<fy<<"\n\t gx = "<<gx<<"\n\t gy = "<<gy<<"\n\t delta x = "<<dx<<"\n\t delta y = "<<dy<<endl;
x=x+dx;
y=y+dy;
f = (x*x)+(y*y)-9;
g = ((x*x)/16)+((y*y)/4)-1;
k++;	
}
cout<<"\n\nSe llego al resultado en "<<k-1<<" iteraciones"<<endl;
cout<<"X0 = "<<abs(x)<<"\t X1 = "<<abs(x)*(-1)<<endl<<"Y0 = "<<abs(y)<<"\t Y1 = "<<abs(y)*(-1)<<endl;
	
}
void segundoorden(){
int k;
float x,y,dx,dy,f,g,fx,fy,gx,gy,fxx,fyy,fxy,gxx,gyy,gxy,error;
char o;
dx=dy=0;
k=1;
error=.0000001;

cout<<"Ingrese los valores iniciales para X y para Y (deben ser diferentes a 0)"<<endl;
cout<<"X = ";
cin>>x;
cout<<"\nY = ";
cin>>y;
cout<<"El error de aproximacion = "<<error<<" ¿Desea cambiarlo? Si(s) No(cualquier otra tecla)"<<endl;
cin>>o;
switch (o){
	case ('s'):
cout<<"Ingrese el error de aproximacion delta x, delta y"<<endl;
cin>>error;
	break;
	
	default:
		break;
		
}


f = (x*x)+(y*y)-9;
g = ((x*x)/16)+((y*y)/4)-1;
fxx=2;
fyy=2;
fxy=0;
gxx=2/16;
gyy=2/4;
gxy=0;
	
	
while (abs(f) > error || abs(g) > error){

fx = 2*x;
gx = x/8;
fy = 2*y;
gy = y/2;
dx = (((-f)*(gy+(g/(4*gy))))-((-g)*(fy+(f/fy))))/(((gy+(g/(4*gy)))*(fx+(f/fx)))-((gx+(g/(16*gx)))*(fx+(f/fy))));
dy = (((-g)*(fx+(f/fx)))-((gx+(g/(16*gx)))*(-f)))/(((gy+(g/(4*gy)))*(fx+(f/fx)))-((gx+(g/(16*gx)))*(fx+(f/fy))));
cout<<"________________________________________________________________"<<endl;
cout<<"Iteracion "<<k<<"\n\n\t X = "<<x<<"\n\t Y = "<<y<<"\n\t f(x0 , y0) = "<<f<<"\n\t g(x0 , y0) = "<<g<<"\n\t fx = "<<fx<<"\n\t fy = "<<fy<<"\n\t fxx = "<<fxx<<"\n\t fyy = "<<fyy<<"\n\t fxy = "<<fxy<<"\n\t gx = "<<gx<<"\n\t gy = "<<gy<<"\n\t gxx = "<<gxx<<"\n\t gyy = "<<gyy<<"\n\t gxy = "<<gxy<<"\n\t delta x = "<<dx<<"\n\t delta y = "<<dy<<endl;
x=x+dx;
y=y+dy;
f = (x*x)+(y*y)-9;
g = ((x*x)/16)+((y*y)/4)-1;
k++;	
}
cout<<"Se llego al resultado en "<<k-1<<" iteraciones\n"<<endl;
cout<<"X0 = "<<abs(x)<<"\t X1 = "<<abs(x)*(-1)<<endl<<"Y0 = "<<abs(y)<<"\t Y1 = "<<abs(y)*(-1)<<endl;
	
}
void dsuces(){
	int a,w;
	w=1;
	float h1, h2, h, e, x1, x2, x, l, v, r,f1,f2,error;
	cout<<"Ingrese el largo del abrebadero"<<endl;
	cin>>l;
	cout<<"Ingrese el volumen del abrebadero (metros cubicos)"<<endl;
	cin>>v;
	cout<<"Ingrese el radio"<<endl;
	cin>>r;
	cout<<"Ingrese h1: "<<endl;
	cin>>h1;
	cout<<"Ingrese h2: "<<endl;
	cin>>h2;
			if (h1 < h2){
				x1=h1;
				x2=h2;
			}
			else {
				x1=h2;
				x2=h1;
			}
			f1 = l*(((M_PI*r*r)/2)-((r*r)*asin(h1/r))-(h1*(sqrt((r*r)-(h1*h1)))))-v;
			f2 = l*(((M_PI*r*r)/2)-((r*r)*asin(h2/r))-(h2*(sqrt((r*r)-(h2*h2)))))-v;
			e = abs(x1-x2);
	if (h1 >= r || h2 >= r){
	cout<<"Los valores iniciales deben ser menores al radio"<<endl;
	}
	else if ((f1*f2) >= 0){
		cout<<"Los valores ingresados estan fuera del rango de solucion, intente con nuevos valores"<<endl;
	}
	else{
	cout<<"Ingrese valor para el error de convergencia"<<endl;
	cin>>error;	
		cout<<"Numero maximo de iteraciones: "<<endl;
	cin>>a;	
	for (int i = 0; i < a; i++){
		if (e > error){
			x = (x1+x2)/2;
			cout<<"________________________________________________________"<<endl;
			cout<<"\n Iteracion : "<<w<<endl;
			cout<<"\t Altura = "<<x<<endl;
			cout<<"error = " <<e<<endl;
			f1 = l*(((M_PI*r*r)/2)-((r*r)*asin(x1/r))-(x1*(sqrt((r*r)-(x1*x1)))))-v;
			f2 = l*(((M_PI*r*r)/2)-((r*r)*asin(x/r))-(x*(sqrt((r*r)-(x*x)))))-v;
			e = abs(x1-x2);
			if((f1*f2)<= 0){
				x1=x1;
				x2=x;
			}
			else{
				x1=x;
				x2=x2;
			}
			w++;
			
		}
		else {}
		
	}
}

}
void ili(){
int i,a,w;
w=1;
	float h1, h2, h, e, x1, x2, x, l, v, r,f1,f2,ddf1,ddf2,error;
	cout<<"Ingrese el largo del abrebadero"<<endl;
	cin>>l;
	cout<<"Ingrese el volumen del abrebadero (metros cubicos)"<<endl;
	cin>>v;
	cout<<"Ingrese el radio"<<endl;
	cin>>r;
	cout<<"Ingrese h1: "<<endl;
	cin>>h1;
	cout<<"Ingrese h2: "<<endl;
	cin>>h2;
	cout<<"Ingrese valor para el error de convergencia"<<endl;
	cin>>error;
	
			f1 = l*(((M_PI*r*r)/2)-((r*r)*asin(h1/r))-(h1*(sqrt((r*r)-(h1*h1)))))-v;
			f2 = l*(((M_PI*r*r)/2)-((r*r)*asin(h2/r))-(h2*(sqrt((r*r)-(h2*h2)))))-v;
			ddf1=(2*h1)/(sqrt((r*r)-(h1*h1)));	//SIN L PORQUE YOLO
			ddf2=(2*h2)/(sqrt((r*r)-(h2*h2)));
	if ((f1*ddf1) > 0){
		x1=h1;
		x2=h2;
	}
	else{
		x1=h2;
		x2=h1;
	}
	e = abs(x1-x2);				
	if (h1 >= r || h2 >= r){
	cout<<"Los valores iniciales deben ser menores al radio"<<endl;
	}
	else if ((f1*f2) >= 0){
		cout<<"Los valores ingresados estan fuera del rango de solucion, intente con nuevos valores"<<endl;
	}
	else{
		cout<<"Numero maximo de iteraciones: "<<endl;
	cin>>a;	

	x = x2-(((f2)*(x2-x1))/(f2-f1));
	cout<<"________________________________________________________"<<endl;
	cout<<"\n Iteracion : "<<w<<endl;
	cout<<"\t Altura = "<<x<<endl;
	
	for (i = 0; i < a; i++){
		if (e > error){
			f1 = l*(((M_PI*r*r)/2)-((r*r)*asin(x1/r))-(x1*(sqrt((r*r)-(x1*x1)))))-v;
			f2 = l*(((M_PI*r*r)/2)-((r*r)*asin(x2/r))-(x2*(sqrt((r*r)-(x2*x2)))))-v;
			x2=x;
			x = x2-(((f2)*(x2-x1))/(f2-f1));
			e = abs(x-x2)/x;
			cout<<"________________________________________________________"<<endl;
			cout<<"\n Iteracion : "<<w<<endl;
			cout<<"\t Altura = "<<x<<endl;	
			w++;	
		}
		else{
		}
		
	}
	if (w >= a){
		cout<<"Iteraciones insuficientes"<<endl;
	}
}	
}
void newton(){
	float n,error,e,x1,x,f,df;
	int a;
	cout<<"Ingrese numero a encontrar su raiz cubica"<<endl;
	cin>>n;
	cout<<"Indique cantidad maxima de iteraciones"<<endl;
	cin>>a;
	cout<<"Indique error de convergencia"<<endl;
	cin>>error;
	x1=n;
	f=(pow(x1,3))-n;
	df=3*x1*x1;
	x=x1-(f/df);
	e = abs(x-x1);
	for(int i = 0; i < a; i++){
		if(e>error){
			x1=x;
			f=(pow(x1,3))-n;
			df=3*x1*x1;
			x=x1-(f/df);
			
			e = abs(x-x1);
		}	
	}
	cout<<" x = "<<x<<endl;
}
void bailey(){
	float n,error,e,x1,x,f,df,ddf;
	int a;
	cout<<"Ingrese numero a encontrar su raiz cubica"<<endl;
	cin>>n;
	cout<<"Indique cantidad maxima de iteraciones"<<endl;
	cin>>a;
	cout<<"Indique error de convergencia"<<endl;
	cin>>error;
	x1=n;
	f=(pow(x1,3))-n;
	df=3*x1*x1;
	ddf=6*x1;
	x=x1-(f/(df-((ddf*f)/(2*df))));
	e = abs(x-x1);
	for(int i = 0; i < a; i++){
		if(e>error){
			x1=x;
			f=(pow(x1,3))-n;
			df=3*x1*x1;
			ddf=6*x1;
			x=x1-(f/(df-((ddf*f)/(2*df))));
			e = abs(x-x1);
		}	
	}
	cout<<" x = "<<x<<endl;
	
	
	
}
void falsi(){
int a,w;
w=1;
	float h1, h2, h, e, x1, x2, x, l, v, r,f1,f2,ddf1,ddf2,error;
	cout<<"Ingrese el largo del abrebadero"<<endl;
	cin>>l;
	cout<<"Ingrese el volumen del abrebadero (metros cubicos)"<<endl;
	cin>>v;
	cout<<"Ingrese el radio"<<endl;
	cin>>r;
	cout<<"Ingrese h1: "<<endl;
	cin>>h1;
	cout<<"Ingrese h2: "<<endl;
	cin>>h2;
	cout<<"Ingrese valor para el error de convergencia"<<endl;
	cin>>error;
	
			f1 = l*(((M_PI*r*r)/2)-((r*r)*asin(h1/r))-(h1*(sqrt((r*r)-(h1*h1)))))-v;
			f2 = l*(((M_PI*r*r)/2)-((r*r)*asin(h2/r))-(h2*(sqrt((r*r)-(h2*h2)))))-v;
			ddf1=(2*h1)/(sqrt((r*r)-(h1*h1)));	//SIN L PORQUE YOLO
			ddf2=(2*h2)/(sqrt((r*r)-(h2*h2)));
	if ((f1*f2) > 0){
		x1=h1;
		x2=h2;
	}
	else{
		x1=h2;
		x2=h1;
	}
	e = abs(x1-x2);				
	if (h1 >= r || h2 >= r){
	cout<<"Los valores iniciales deben ser menores al radio"<<endl;
	}
	else if ((f1*f2) >= 0){
		cout<<"Los valores ingresados estan fuera del rango de solucion, intente con nuevos valores"<<endl;
	}
	else{
		cout<<"Numero maximo de iteraciones: "<<endl;
	cin>>a;	

	x = x2-(((f2)*(x2-x1))/(f2-f1));
	
	for (int i = 0; i < a; i++){
		if (e > error){
			f1 = l*(((M_PI*r*r)/2)-((r*r)*asin(x1/r))-(x1*(sqrt((r*r)-(x1*x1)))))-v;
			f2 = l*(((M_PI*r*r)/2)-((r*r)*asin(x2/r))-(x2*(sqrt((r*r)-(x2*x2)))))-v;
			if((f1*f2)<= 0){
				x1=x1;
				x2=x;
			}
			else{
				x1=x;
				x2=x2;
			}
			x = x2-(((f2)*(x2-x1))/(f2-f1));
			e = abs(x-x2)/x;
			cout<<"________________________________________________________"<<endl;
			cout<<"\n Iteracion : "<<w<<endl;
			cout<<"\t Altura = "<<x<<endl;	
				w++;	
		}
	}
if (w >= a){
	cout<<"Iteraciones insuficientes"<<endl;
}
}	
}
void lb() {
	int n, m,w,np,contadorConver,k,z,nx,mx;
	float r,s,e,dr,ds,error,newsize,r0,s0;
	cout<<"Introduzca el grado del polinomo: "<<endl;
	cin>>n;
	n++;
	w=contadorConver=z=0; //w es el contador de veces que se repite el proceso (no solo la division, todo el proceso)
	m = n-1;
	float C[n],Mr[n],Ms[n],Mat1[n],Mat2[m],raizReal[n],raizImaginaria[n];
	float raiz;
	for (int i = 0; i<n;i++)
	{
		Mr[i]=Ms[i]=Mat1[i]=raizReal[i]=raizImaginaria[i]=0;
	}
	cout<<"Introduzca los coeficientes del polinomio (deben de ir en orden descendednte segun el exponente y el primer coeficiente debe ser 1)"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"Introduzca el coeficiente de x^"<<-i+(n-1)<<" :"<<endl;
		cin>>C[i];
	}
	if (C[0] != 1)
	{
		cout<<"El coeficiente de x^"<<n-1<<" debe ser = 1 "<<endl;
	}
	else 
	{
	cout<<"Introduzca el valor inicial de r : "<<endl;
	cin>>r0;
	cout<<"Introduzca el valor inicial de s : "<<endl;
	cin>>s0;
	cout<<"Introduzca el valor del error de convergencia: " <<endl;
	cin>>error;
	cout<<"Introduzca numero maximo de iteraciones : "<<endl;
	cin>>k;
	dr = ds = 1;
	
	for(int j = 0; j < 2*(n-1) ; j=j+2)		//Se necesita sumarle 2 al contador dado que en cada paso se guardan 2 valores en las raices (j y j+1)
	{	
	dr=ds=1;
	np = (n-1)- 2*w; //np es el grado del polinomio a dividir
	nx = n-1 - 2*w;
	mx = nx-1;
		if (np <= 2)
		{
			if(np == 2)
			{
				raiz=(C[1]*C[1])-(4*C[2]);
				if (raiz < 0)
				{
					raiz = abs(raiz);
					raizReal[j]=(-C[1])/2;
					raizReal[j+1]=(-C[1])/2;
					raizImaginaria[j]=sqrt(raiz)/2;
					raizImaginaria[j+1]=-sqrt(raiz)/2;
				}
				else 
				{
					raizReal[j]=((-C[1])+(sqrt(raiz)))/2;
					raizReal[j+1]=((-C[1])-(sqrt(raiz)))/2;
					raizImaginaria[j]=0;
					raizImaginaria[j+1]=0;	
				}
			}
			else
			{
				raizReal[j]=-C[1];
			}
			break;
		}
	else{
	contadorConver=0;
	r=r0;
	s=s0;
	for (int i = 0; i<= np;i++)
	{
		Mr[i]=Ms[i]=Mat1[i]=Mat2[i]=0;		//regresa a 0 Mr y Ms
	}
	while (abs(dr) > error || abs(ds) > error){ 
	for (int i = 0; i <= np ; i++)
	{
		Mat1[i]=C[i]+Mr[i]+Ms[i];	//hace la primera division sintetica
		Mr[i+1]=(-r)*(Mat1[i]);
		Ms[i+2]=(-s)*(Mat1[i]);
	}
	for (int i = 0; i<= np;i++)
	{
		Mr[i]=Ms[i]=0;		//regresa a 0 Mr y Ms
	}
	for (int i = 0; i < np; i++)		//segunda division sintetica
	{
		Mat2[i]=-Mat1[i]+Mr[i]+Ms[i];
		Mr[i+1]=(-r)*(Mat2[i]);
		Ms[i+2]=(-s)*(Mat2[i]);
	}	
	dr = (((Mat2[mx-1])*(-Mat1[nx-1]))-((-Mat1[nx])*(Mat2[mx-2])))/(((Mat2[mx-1])*(Mat2[mx-1]))-((Mat2[mx]+Mat1[nx-1])*(Mat2[mx-2])));	//cramer
	ds = (((-Mat1[nx])*(Mat2[mx-1]))-((Mat2[mx]+Mat1[nx-1])*(-Mat1[nx-1])))/(((Mat2[mx-1])*(Mat2[mx-1]))-((Mat2[mx]+Mat1[nx-1])*(Mat2[mx-2])));	//cramer
	r = r+dr;
	s = s+ds;
	contadorConver++;
	if (contadorConver > k)
	{
		cout<<"Fallo en la convergencia"<<endl;
		break;
	}	
	z++;
	}
	raiz = (r*r)-(4*s);
	if (raiz < 0)
				{
					raiz = abs(raiz);
					raizReal[j]=-r/2;
					raizReal[j+1]=-r/2;
					raizImaginaria[j]=sqrt(raiz)/2;
					raizImaginaria[j+1]=-sqrt(raiz)/2;
				}
				else 
				{
					raizReal[j]=((-r)+(sqrt(raiz)))/2;
					raizReal[j+1]=((-r)-(sqrt(raiz)))/2;
					raizImaginaria[j]=0;
					raizImaginaria[j+1]=0;	
				}
	w++;
	newsize=(n-1)-(2*w);
	for(int i = 0; i<=newsize ; i++)
	{
		C[i]=Mat1[i];
	}
}
}
cout<<"Raices :"<<endl;
	for (int i = 0 ;i < n-1; i ++)
	{
		if (raizImaginaria[i]==0)
		{
			cout<<"X"<<i<<" = "<<raizReal[i]<<endl;
		}
		else
		{
			cout<<"X"<<i<<" = "<<raizReal[i];
			if(raizImaginaria[i]<0)
			{
				cout<<raizImaginaria[i]<<"i"<<endl;
			}
			else
			{
				cout<<"+"<<raizImaginaria[i]<<"i"<<endl;
			}
		}
	}
}
}
void bv(){
	 int np, n, kc, nm, i, j, k, m;
    double eps, xz, x0, a[20], p[20], pt[20], root[10], xt = 0;

    cout << "Ingrese grado del polinomio\n";
    cin >> np;
    cout << "Ingrese maximo numero de iteraciones\n";
    cin >> kc;
    cout << "Ingrese el valor de la convergencia\n";
    cin >> eps;

    cout << "Ingrese el coeficiente de:\n";
    for (i=1; i <= np; i++) {
        cout << "x^" << np-i << " = ";
        cin >> a[i];
    }
    xz = (-a[np])/a[np-1];
    
    for (j = 1; j <= np-1; j++) {
        n = np + 1 - j;
        nm = n -1;
        x0 = xz;
        for (m = 1; m <= kc; m++) {
            p[1] = x0 + a[1];
            pt[1] = 1;
            for (k = 2; k <= n; k++) {
                pt[k] = x0*pt[k-1]+p[k-1];
                p[k] = a[k] + x0*p[k-1];
            }
            xt = x0 - p[n]/pt[n];
            if (abs(xt-x0) > eps) {
                if (m == kc) {
                    cout << "Insuficientes iteraciones\n";
                }
                x0 = xt;
            }
        }
        root[j] = xt;
        for (k = 1; k <= nm; k++) {
            a[k] = p[k];
        }
    }
    root[np] = -a[1];
    cout << endl;
    for (i = 1; i <= np; i++) {
        cout << "Raiz " << i << " = " << root[i] << endl;
    }
    cout << endl;
}
void UniqueInterpolatingPolynomial(){
	
	int n, x, y, i, j, a;
	float z,w,test,Yfinal;
	Yfinal=0;
	cout<<"Ingrese cantidad de pares a utilizar" << endl;
	cin>> n;
	
	float px[n],py[n];
	float A[n][n];
	float B[n][n];
	float auxa[n];
	float auxb[n];
	
		for (x = 0; x < n; x++){ // CREA 0 en aux
			auxa[x]=0;
			auxb[x]=0;
		}
	for (x = 0; x < n; x++){ // llena matriz identidad
		for(y = 0; y < n; y++){
			B[x][y]=0;
		}
		B[x][x]=1;
	}
	cout<<"Ingrese los valores de x:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en x
			cout<< "x" <<x<<" :";
			cin>>px[x];
	}
	cout<<"Ingrese los valores de y:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en y
			cout<< "y " <<x<<" :";
			cin>>py[x];
	}
	cout<<"Ingrese punto a evaluar:"<<endl;
	cin>>test;
	
	for (x = 0; x<n ; x++){
		for (y = 0; y<n ; y++){
			A[x][y]= pow(px[x],y);
		}
	}
	
	for (x = 0; x < n; x++){
		if (A[x][x] == 0){
			for (y = x; y < n ; y++){
				if (A[y][x] == 0){
				}
				else {
					for (a = 0; a < n; a++){
					auxa[a]=A[y][a];
					auxb[a]=B[y][a];
					A[y][a]=A[x][a];
					B[y][a]=B[x][a];
					A[x][a]=auxa[a];
					B[x][a]=auxb[a];
				}
				}
			}
			
		}
	}
		for (x = 0; x<n;x++){ 
		z=A[x][x];
		for (y = 0; y < n; y++){
			A[x][y]=A[x][y] / z; // CONSIGUE EL 1 EN LA DIAGONAL
			B[x][y] = B[x][y] / z;
		}
		for (i=0; i < n; i++){
			if(i == x){
			}
			else if (i != x){
				w = A[i][x];
				for (j = 0 ; j < n ; j++){	
					A[i][j]= (A[i][j])-(w * A[x][j]);
					B[i][j]= (B[i][j])-(w * B[x][j]);
				}
			}
		}	
	}
	
	cout<< "RESULTADOS"<<endl;
	for (x = 0; x < n; x++){
		w = 0;
		for (y = 0; y < n; y++){
			w = w + (py[y] * B[x][y]);	
		}
		cout<<" a"<<x<<" = "<<w<<endl;
		Yfinal = Yfinal + (w*pow(test,x));
	}
	
	cout<<"Y = ";
	cout<<Yfinal;
}
void Lagrange(){
	int n, x, y;
	float z,w,test,Yfinal,u,d;
	Yfinal=0;
	u=d=1;
	cout<<"Ingrese cantidad de pares a utilizar" << endl;
	cin>> n;
	float px[n],py[n];
	cout<<"Ingrese los valores de x:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en x
			cout<< "x" <<x<<" :";
			cin>>px[x];
	}
	cout<<"Ingrese los valores de y:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en y
			cout<< "y " <<x<<" :";
			cin>>py[x];
	}
	cout<<"Ingrese punto a evaluar:"<<endl;
	cin>>test;
	
	for (x = 0; x<n ; x++){
		for (y = 0; y<n ; y++){
			if (y!=x){
				u = u*(test-px[y]);
				d = d*(px[x]-px[y]);
			}
			else{
			}
		}
		
	Yfinal = Yfinal + (py[x]*(u/d));
	u=d=1;	
	}
	cout<<"Y ="<<Yfinal;
	cout<<endl;
}
void Newtonback(){
	int n, x, y,m;
	double h,w,test,Yfinal,a,dy,d;
	Yfinal=dy=0;
	double u;
	u=a=1;
	cout<<"Ingrese cantidad de pares a utilizar" << endl;
	cin>> n;
	double px[n],py[n],c[n];
	for (x = 0; x < n-1; x++){ //hace 0 C
			c[x]=0;
	}
	cout<<"Ingrese los valores de x:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en x
			cout<< "x" <<x<<" :";
			cin>>px[x];
	}
	cout<<"Ingrese los valores de y:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en y
			cout<< "y " <<x<<" :";
			cin>>py[x];
	}
	cout<<"Ingrese punto a evaluar:"<<endl;
	cin>>test;
	h =abs(px[1]-px[0]);
	c[0]=py[n-1];
	for (x=1 ; x<n ; x++){
		m=1;
		dy=0;
		u=1;
		u = u*(x);
		for (y = 1 ; y<=x ; y++){
			dy =dy + ((u)*(pow(-1,y))*(py[n-y-1]));
			w=(x-y);
			d=(y+1);
			u = u*(w/d);
		}
		dy = dy + py[n-1];
		for(y=1;y<=x;y++){
			m=m*y;
		}
		c[x]=(dy)/(m*pow(h,x));
	}
	for (x = 0; x < n; x++){ 
			cout<< "c["<<x<<"] =" <<c[x]<<endl;
	}
	
	
	for (x=1; x<n;x++){
		for (y=1 ; y<=x ; y++){
			a = a*(test-px[n-y]);
		}
		a = a * c[x];
		Yfinal= Yfinal+a;
		a=1;
	}
	Yfinal = Yfinal + c[0];
	cout<<" Y = " <<Yfinal<<endl;
	
	
}
void Newtonfwrd(){
	int n, x, y,m;
	double h,w,test,Yfinal,a,dy,d;
	Yfinal=dy=0;
	double u;
	u=a=1;
	cout<<"Ingrese cantidad de pares a utilizar" << endl;
	cin>> n;
	double px[n],py[n],c[n];
	for (x = 0; x < n-1; x++){ //hace 0 C
			c[x]=0;
	}
	cout<<"Ingrese los valores de x:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en x
			cout<< "x" <<x<<" :";
			cin>>px[x];
	}
	cout<<"Ingrese los valores de y:"<<endl;
	for (x = 0; x < n; x++){ //llena valores en y
			cout<< "y " <<x<<" :";
			cin>>py[x];
	}
	cout<<"Ingrese punto a evaluar:"<<endl;
	cin>>test;
	h =abs(px[1]-px[0]);
	c[0]=py[0];
	for (x=1 ; x<n ; x++){
		m=1;
		dy=0;
		u=1;
		u = u*(x);
		for (y = 1 ; y<=x ; y++){
			dy =dy + ((u)*(pow(-1,y))*(py[x-y]));
			w=(x-y);
			d=(y+1);
			u = u*(w/d);
		}
		cout<<"dy = " <<dy<<endl;
		dy = dy + py[x];
		for(y=1;y<=x;y++){
			m=m*y;
		}
		
		c[x]=(dy)/(m*pow(h,x));
	}
	for (x = 0; x < n; x++){ 
			cout<< "c["<<x<<"] =" <<c[x]<<endl;
	}
	
	
	for (x=1; x<n;x++){
		for (y=0 ; y<x ; y++){
			a = a*(test-px[y]);
		}
		a = a * c[x];
		Yfinal= Yfinal+a;
		a=1;
	}
	Yfinal = Yfinal + c[0];
	cout<<" Y = " <<Yfinal<<endl;
}
void AitkenNeville(){
	
	
	int n, x, y;
	float z,w,test,Yfinal;
	Yfinal=0;
	cout<<"Ingrese cantidad de pares a utilizar" << endl;
	cin>> n;
	float px[n],py[n],ym[n][n];
	cout<<"Ingrese los valores de x:"<<endl;
	for (x = 1; x <= n; x++){ //llena valores en x
			cout<< "x" <<x<<" :";
			cin>>px[x];
	}
	cout<<"Ingrese los valores de y:"<<endl;
	for (x = 1; x <= n; x++){ //llena valores en y
			cout<< "y " <<x<<" :";
			cin>>py[x];
	}
	cout<<"Ingrese punto a evaluar:"<<endl;
	cin>>test;
	
	for(x=1; x<=n-1; x++){
		
		ym[1][x]=(py[x]*(test-px[x+1])-py[x+1]*(test-px[x]))/(px[x]-px[x+1]);
		
		
	}
	
	for(x=2;x<=n-1;x++){
		
		for(y=1; y<=n-x; y++){
			
				ym[x][y]=(ym[x-1][y]*(test-px[y+x])-ym[x-1][y+1]*(test-px[y]))/(px[y]-px[y+x]);
			
		}
		
	}

Yfinal=ym[n-1][1];

cout<<"\n\nP(";
cout<<test;
cout<<"): ";
cout<<Yfinal<<endl<<endl;
}
void poli(){
		
	int n,i,j,a,k;
	
	cout<<"Cuantos pares de datos seran ingresados?"<<endl;
	cin>>n;
	float x[n],y[n],xx[6]={0},A[4][4],B[4],C[4][4],cof[4];
	float xt=0,yt=0,xy=0,x2y=0,x3y=0,w,z,q,r;
	
	cout<<"Ingrese los valores de x :"<<endl;
	for (i = 0 ; i<n ; i++){
		cout<<"x"<<i<<" = ";
		cin>>x[i];
		xx[0] = xx[0]+x[i];
	}
	cout<<"Ingrese los valores de y :"<<endl;
	for (i = 0 ; i<n ; i++){
		cout<<"y"<<i<<" = ";
		cin>>y[i];
		yt = yt+y[i];
		xy = xy + (y[i]*x[i]);
		x2y = x2y + (y[i]*pow(x[i],2));
		x3y = x3y + (y[i]*pow(x[i],3));
	}
	B[0]=yt;
	B[1]=xy;
	B[2]=x2y;
	B[3]=x3y;
	for (j = 1; j<6 ; j++){
	for (i = 0; i<n ; i++){
		xx[j]= xx[j]+ pow(x[i],(j+1));
	}
	}
	for (j = 0; j<4 ; j++){
		for (i = 0; i<4;i++){
			A[j][i]=xx[j-1+i];
		} 
	}
	A[0][0]=n;
	
		for (j = 0; j < 4; j++){ // lllena matriz identidad
		for(i = 0; i < 4; i++){
			C[j][i]=0;
		}
		C[j][j]=1;
	}
	
	for (a = 0; a<4;a++){ 
		z=A[a][a];
		for (k = 0; k < 4; k++){
			A[a][k]=A[a][k] / z; // CONSIGUE EL 1 EN LA DIAGONAL
			C[a][k] = C[a][k] / z;
		}
		for (i=0; i < 4; i++){
			if(i == a){
			}
			else if (i != a){
				w = A[i][a];
				for (j = 0 ; j < 4 ; j++){	
					A[i][j]= (A[i][j])-(w * A[a][j]);
					C[i][j]= (C[i][j])-(w * C[a][j]);
				}
			}
		}	
	}
	cout<<"Coeficientes :"<<endl;
	for (a = 0; a < 4; a++){
		w = 0;
		for (k = 0; k < 4; k++){
			w = w + (B[k] * C[a][k]);	
		}
		cof[a]=w;
		cout<<"coeficiente "<<a<<" = "<<cof[a]<<endl;
	}
	
	for (j = 0; j < n; j++){
		r = cof[0]+(cof[1]*x[j])+(cof[2]*pow(x[j],2))+(cof[3]*pow(x[j],3));
		r = r - y[j];
		q = q + pow(r,2);
	}
	cout<<"R^2 = " <<abs(1-q)<<endl;
}
void expo(){
	
	int n,i,j,a,k;
	
	cout<<"Cuantos pares de datos seran ingresados?"<<endl;
	cin>>n;
	float x[n],y[n],A[2][2],B[2],C[2][2],cof[2];
	float xt=0,yt=0,x2=0,logy=0,xy=0,w,z,q,r;
	
	cout<<"Ingrese los valores de x :"<<endl;
	for (i = 0 ; i<n ; i++){
		cout<<"x"<<i<<" = ";
		cin>>x[i];
		xt= xt +x[i];
		x2 = x2 + pow(x[i],2);
	}
	cout<<"Ingrese los valores de y :"<<endl;
	for (i = 0 ; i<n ; i++){
		cout<<"y"<<i<<" = ";
		cin>>y[i];
		yt = yt + y[i];
		logy = logy + log(y[i]);
		xy = xy + (x[i]*log(y[i]));
	}
	B[0]=logy;
	B[1]=xy;
	A[0][0]=n;
	A[0][1]=xt;
	A[1][0]=xt;
	A[1][1]=x2;

			for (j = 0; j < 2; j++){ // lllena matriz identidad
			for(i = 0; i < 2; i++){
				C[j][i]=0;
			}
			C[j][j]=1;
			}
	
	for (a = 0; a<2;a++){ 
		z=A[a][a];
		for (k = 0; k < 2; k++){
			A[a][k]=A[a][k] / z; // CONSIGUE EL 1 EN LA DIAGONAL
			C[a][k] = C[a][k] / z;
		}
		for (i=0; i < 2; i++){
			if(i == a){
			}
			else if (i != a){
				w = A[i][a];
				for (j = 0 ; j < 2 ; j++){	
					A[i][j]= (A[i][j])-(w * A[a][j]);
					C[i][j]= (C[i][j])-(w * C[a][j]);
				}
			}
		}	
	}
	cout<<"Coeficientes :"<<endl;
	for (a = 0; a < 2; a++){
		w = 0;
		for (k = 0; k < 2; k++){
			w = w + (B[k] * C[a][k]);	
		}
		cof[a]=exp(w);
	}
	cof[1]=w;
cout<<"a = "<<cof[0]<<"\t b = "<<cof[1]<<endl;
	for (j = 0; j < n; j++){
		r = cof[0]*exp(cof[1]*x[j]);
		r = r - y[j];
		q = q + pow(r,2);
	}
	cout<<"R^2 = " <<abs(1-q)<<endl;
	
}
void cofind(){
	float xi,xf,h,z,w;
int k,i,j,x,y,n;
cout<<"Ingrese limite inferior de la integral : "<<endl;
cin>>xi;
cout<<"Ingrese limite superior de la integral : "<<endl;
cin>>xf;
cout<<"Con cuantos pares de datos desea trabajar? (3 pares es lo optimo)" <<endl;
cin>>k;
n=k;
h = (xf - xi)/(k-1);
cout<< " h = "<< h<<"\n\n";
float A[k][k],D[k],B[k][k],C[k];

for (i=0 ; i<k ; i++){
	for (j = 0 ; j<k ; j++){
		A[i][j]= pow(xi+(j*h),i);
		cout<<A[i][j]<<"\t";
	}
	cout<<endl;
}

for (i=0; i<k ; i++){
	D[i]=((pow(xf,(i+1)))-(pow(xi,(i+1))))/(i+1);
}
for (x = 0; x < n; x++){ // lllena matriz identidad
		for(y = 0; y < n; y++){
			B[x][y]=0;
		}
		B[x][x]=1;
	}

for (x = 0; x<n;x++){ 
		z=A[x][x];
		for (y = 0; y < n; y++){
			A[x][y]=A[x][y] / z; // CONSIGUE EL 1 EN LA DIAGONAL
			B[x][y] = B[x][y] / z;
		}
		for (i=0; i < n; i++){
			if(i == x){
			}
			else if (i != x){
				w = A[i][x];
				for (j = 0 ; j < n ; j++){	
					A[i][j]= (A[i][j])-(w * A[x][j]);
					B[i][j]= (B[i][j])-(w * B[x][j]);
				}
			}
		}	
	}
	
	for (i = 0; i<k ; i++){
		C[i]= 1 + pow(xi+(h*i),3);
	}
	z=0;
	for (x = 0; x < n; x++){
		w = 0;
		for (y = 0; y < n; y++){
			w = w + (D[y] * B[x][y]);	
		}
		z = z + (w * C[x]);
	}
	w = (xf + (pow(xf,4)/4))-(xi + (pow(xi,4)/4));
	cout<<"Resultado obtenido = "<<z<<endl;
	cout<<"Resultado real = "<<w<<endl;
	cout<<"El error es = "<<abs(w-z)<<endl;	
}
void trapecios(){
	float xi,xf,h,w,i;
w=0;
cout<<"Ingrese limite inferior de la integral : "<<endl;
cin>>xi;
cout<<"Ingrese limite superior de la integral : "<<endl;
cin>>xf;
cout<<"h = ";
cin>>h;

for (i=xi;i<=xf;i=i+h){
	if (i ==xi || i == xf ){
		w = w + (pow(i,2)*exp(i)*(h/2));
	}
	else{
		w = w + (pow(i,2)*exp(i)*(h));
	}
}
cout<<"El resultado obtenido es = "<<w<<endl;
cout<<"El resultado exacto es = "<<(exp(xf)*(pow(xf,2)-(2*xf)+2))-(exp(xi)*(pow(xi,2)-(2*xi)+2))<<endl;
cout<<"El error es = "<<abs(w-((exp(xf)*(pow(xf,2)-(2*xf)+2))-(exp(xi)*(pow(xi,2)-(2*xi)+2))))<<endl;
}
void simpson(){
	float xi,xf,h,w,i;
int a=0;
w=0;
cout<<"Ingrese limite inferior de la integral : "<<endl;
cin>>xi;
cout<<"Ingrese limite superior de la integral : "<<endl;
cin>>xf;
cout<<"h = ";
cin>>h;

for (i=xi;i<=xf;i=i+h){
	if (i ==xi || i == xf ){
		w = w + (pow(i,2)*exp(i)*(h/3));
	}
	else{
		if (a%2 == 0){
		w = w + (pow(i,2)*exp(i)*(2*h/3));
	}
		else {
		w = w + (pow(i,2)*exp(i)*(4*h/3));	
		}
	}
	a++;
}

cout<<"El resultado obtenido es = "<<w<<endl;
cout<<"El resultado exacto es = "<<(exp(xf)*(pow(xf,2)-(2*xf)+2))-(exp(xi)*(pow(xi,2)-(2*xi)+2))<<endl;
cout<<"El error es = "<<abs(w-((exp(xf)*(pow(xf,2)-(2*xf)+2))-(exp(xi)*(pow(xi,2)-(2*xi)+2))))<<endl;
}
void newton38(){
	float xi,xf,h,w,i;
int a=0;
w=0;
cout<<"Ingrese limite inferior de la integral : "<<endl;
cin>>xi;
cout<<"Ingrese limite superior de la integral : "<<endl;
cin>>xf;
cout<<"h = ";
cin>>h;
for (i=xi;i<=xf;i=i+h){
	if (i ==xi || i+h >= xf ){
		w = w + (pow(i,2)*exp(i)*(3*h/8));
	}
	else{
		if (a%3 == 0){
		w = w + (pow(i,2)*exp(i)*(6*h/8));
	}
		else {
		w = w + (pow(i,2)*exp(i)*(9*h/8));	
		}
	}
	a++;
}
cout<<"El resultado obtenido es = "<<w<<endl;
cout<<"El resultado exacto es = "<<(exp(xf)*(pow(xf,2)-(2*xf)+2))-(exp(xi)*(pow(xi,2)-(2*xi)+2))<<endl;
cout<<"El error es = "<<abs(w-((exp(xf)*(pow(xf,2)-(2*xf)+2))-(exp(xi)*(pow(xi,2)-(2*xi)+2))))<<endl;
}
void romberg(){
	
	float xi,xf,h,w,i,T[4]={0};
int a=0;
w=0;
cout<<"Ingrese limite inferior de la integral : "<<endl;
cin>>xi;
cout<<"Ingrese limite superior de la integral : "<<endl;
cin>>xf;
cout<<"h comienza en 1 y termina en .125 \n";
h=1;
for (h = 1; h >=.125 ; h = h/2){
	for (i=xi;i<=xf;i=i+h){
		if (i ==xi || i == xf ){
		T[a]=T[a]+(1/(1+pow(i,2)))*(h/2);
	}
	else{
		T[a]=T[a]+(1/(1+pow(i,2)))*(h);
	}
}	
		a++;
}
for (i = 3; i > 0 ; i--)
	for (a = 0; a <i ; a++){
		T[a]=((pow(4,(a+1))*T[a+1])-T[a])/(pow(4,(a+1))-1);
}
cout<<"El resultado obtenido es = "<<T[0]<<endl;
cout<<"El resultado exacto es ="<<atan(xf)-atan(xi)<<endl;
cout<<"El error es = " <<abs(T[0]-(atan(xf)-atan(xi)))<<endl;
}
void eu(){
	int i,a;
	float xi,xf,h,k,y,f;
	
	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0\t|x = "<<xi<<"\ty = "<<y;
	f = (xi*y);
	cout<<"\tf(x,y) = "<<f<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + (h*f);
		f = (k*y);
		cout<<a<<"\t|x = "<<k<<"\ty = "<<y<<"\tf(x,y) = "<<f<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
}
void rk2a(){
	int i,a;
	float xi,xf,h,k,y,k1,k2;
	
	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0\t|x = "<<xi<<"\ty = "<<y;
	k1 = (xi*y);
	k2 = (xi+h)*(y+(h*k1));
	cout<<"\tk1 = "<<k1<<"\tk2 = "<<k2<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + ((h/2)*(k1+k2));
		k1 = (k*y);
		k2 = (k+h)*(y+(h*k1));
		cout<<a<<"\t|x = "<<k<<"\ty = "<<y<<"\tk1 = "<<k1<<"\tk2 = "<<k2<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
}
void rk2b(){
	int i,a;
	float xi,xf,h,k,y,k1,k2;
	
	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0\t|x = "<<xi<<"\ty = "<<y;
	k1 = (xi*y);
	k2 = (xi+(h/2))*(y+((h/2)*k1));
	cout<<"\tk1 = "<<k1<<"\tk2 = "<<k2<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + (h*k2);
		k1 = (k*y);
		k2 = (k+(h/2))*(y+((h/2)*k1));
		cout<<a<<"\t|x = "<<k<<"\ty = "<<y<<"\tk1 = "<<k1<<"\tk2 = "<<k2<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
}
void rk3(){
	int i,a;
	float xi,xf,h,k,y,k1,k2,k3;
	
	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0   |x = "<<xi<<"   y = "<<y;
	k1 = (xi*y);
	k2 = (xi+(h/2))*(y+((h/2)*k1));
	k3 = (xi+h)*(y+(2*h*k2)-(h*k1));
	cout<<"   k1 = "<<k1<<"   k2 = "<<k2<<"   k3 = "<<k3<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + ((h/6)*(k1+(4*k2)+k3));
		k1 = (k*y);
		k2 = (k+(h/2))*(y+((h/2)*k1));
		k3 = (k+h)*(y+(2*h*k2)-(h*k1));
		cout<<a<<"   |x = "<<k<<"   y = "<<y<<"   k1 = "<<k1<<"   k2 = "<<k2<<"   k3 = "<<k3<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
}
void rk4a(){
	int i,a;
	float xi,xf,h,k,y,k1,k2,k3,k4;
	
	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0  |x= "<<xi<<"  y= "<<y;
	k1 = (xi*y);
	k2 = (xi+(h/2))*(y+((h/2)*k1));
	k3 = (xi+(h/2))*(y+((h/2)*k2));
	k4 = (xi+h)*(y+(h*k3));
	
	cout<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + ((h/6)*(k1+(2*k2)+(2*k3)+k4));
		k1 = (k*y);
		k2 = (k+(h/2))*(y+((h/2)*k1));
		k3 = (k+(h/2))*(y+((h/2)*k2));
		k4 = (k+h)*(y+(h*k3));
		
		cout<<a<<"  |x= "<<k<<"  y= "<<y<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
}
void rk4b(){
	
	int i,a;
	float xi,xf,h,k,y,k1,k2,k3,k4;
	
	cout<<"Ingrese valor inicial de x : \nx0 = ";
	cin>>xi;
	cout<<"Ingrese valor final de x : \nxf =";
	cin>>xf;
	cout<<"Ingrese valor inicial de y : \ny =";
	cin>>y;
	cout<<"Ingrese numero de iteraciones : \ni =";
	cin>>i;
	h = (xf - xi)/i;
	cout<<"\nh = "<<h<<endl;
	cout<<"0  |x= "<<xi<<"  y= "<<y;
	k1 = (xi*y);
	k2 = (xi+(h/3))*(y+((h/3)*k1));
	k3 = (xi+(2*h/3))*(y+(h*k2)-((h/3)*k1));
	k4 = (xi+h)*(y+(h*k3)-(h*k2)+(h*k1));
	
	cout<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
	k = xi+h;
	for(a = 1; a<=i ; a++)
	{
		y = y + ((h/8)*(k1+(3*k2)+(3*k3)+k4));
		k1 = (k*y);
		k2 = (k+(h/3))*(y+((h/3)*k1));
		k3 = (k+(2*h/3))*(y+(h*k2)-((h/3)*k1));
		k4 = (k+h)*(y+(h*k3)-(h*k2)+(h*k1));
		
		cout<<a<<"  |x= "<<k<<"  y= "<<y<<"  k1= "<<k1<<"  k2= "<<k2<<"  k3= "<<k3<<"  k4= "<<k4<<endl;
		k=k+h;
	}
	cout<<"\nEl resultado es : \n\ty = "<<y<<endl;
}
void escalar(){
		int r, c, n,o,i,k,x;
		cout << "Ingrese la cantidad de renglones que tendra la matriz"<<endl;
    	cin>>r;
    	cout<<endl<<"Ingrese la cantidad de columnas que tendra la matriz" <<endl;
    	cin>>c;
    	int mat1[r][c];
    	
    	for (i = 0; i < r; i++) { //i es contador de rengloes, k contador de columnas
    	cout<< "Ingrese valores para el renglon " <<i+1 << "de la matriz";
        cout << endl;
        for (k = 0; k < c; k++) {
            cin>> mat1[i][k];            
        }
        for (k = 0; k < c; k++){
        cout << mat1[i][k] << "\t";
    }
     cout<< "--->Renglon " <<i+1 <<endl << "\n";
	}
	cout<< "Matriz:" << endl;
	for (i = 0; i < r; i++){
		for (k = 0; k < c; k++){
			cout <<mat1[i][k] << "\t";
		}
		cout<<endl;
	}
	cout<< "Ingrese el numero escalar por el cual sera multiplicada la matriz"<<endl;
	cin>>n;
	cout<< "Matriz resultante de la multiplicacion" << endl;
    for (i = 0; i < r; i++) {
        cout << endl;
        for (k = 0; k < c; k++) {
            mat1[i][k] = mat1[i][k] * n;
            cout << mat1[i][k] << "\t";
            
        }
    }
}
void mmult(){
	int r, c, n,o,i,k;
	int m,p,x,y;
	cout<< "Para multiplicaciones matriciales tenga en cuenta que el numero de columnas de la primera matriz y el numero de renglones de la segunda deben ser iguales." <<endl;
	cout<< "Ingrese cantidad de renglones de la primera matriz:"<<endl;
	cin>>n;
	cout<<  "Ingrese cantidad de columnas de la primera matriz (tambien sera tomado como la cantidad de rengoles de la segunda matriz):" <<endl;
	cin>>m;
	cout<< "Ingrese cantidad de columnas de la segunda matriz:" <<endl;
	cin>>p;
	
	int mat1[n][m];
    int mat2[m][p];
    int mat3[n][p];
    
    for (r = 0; r < n; r++) {
    	cout<< "Ingrese un valores para el renglon " <<r+1 << " de la primera matriz";
        cout << endl;
        for (c = 0; c < m; c++) {
            cin>> mat1[r][c];            
        }
        for (c = 0; c < m; c++){
        cout << mat1[r][c] << "\t";
    }
     cout<< "--->Renglon " <<r+1 <<endl << "\n";
	}
	for (r = 0; r < m; r++) {
    	cout<< "Ingrese un valores para el renglon " <<r+1 << " de la segunda matriz";
        cout << endl;
        for (c = 0; c < p; c++) {
            cin>> mat2[r][c];            
        }
        for (c = 0; c < p; c++){
        cout << mat2[r][c] << "\t";
    }
     cout<< "--->Renglon " <<r+1 <<endl << "\n";
	}
    for (x = 0; x < n ; x++){ //iguala la tercera matriz 0
    	for(y = 0; y < p ; y++){
    		mat3[x][y]=0;
    	}
    }
    
    for (x = 0; x < n ; x++){	//mueve los renglones de la tercera matriz (la resultante)
    	for (y = 0; y < p ; y++){ //mueve las columnas de la tercera matriz
    			for (k = 0; k < m ; k++){
    				mat3[x][y]=mat3[x][y] + (mat1[x][k] * mat2[k][y]);
    			}
    		}
    	}	

    cout<< "Matriz resultante de la multiplicacion" <<endl;
    for (x = 0; x < n ; x++){  //muestra la matriz resultante
    	for(y = 0; y < p ; y++){
    		cout<<mat3[x][y]<< "\t";
    	}
    	cout<<endl;
    }
}
void dete(){
	int r, c, o,x;
	int p, n, j, i, k, m;
    double a[100][100], u[100][100], l[100][100], det, aux;
    det = 1;
    
    cout << "Ingrese dimension de la matriz, se generara una matriz cuadrada\n";
    cin >> n;

    cout << endl;
               
            cout << "Ingrese los valores para la matriz\n";
            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    cin >> a[i][j];
            }
    }
    cout << endl;
    u[0][0]=1;
    for(k = 1; k <= n; k++){
        u[k][k] = 1;
        for(i = k; i <= n; i++){
            aux = 0;
            for(p = 1; p <= k-1; p++)
                aux += l[i][p] * u[p][k];
            l[i][k] = a[i][k] - aux;   
        }
        
        for(j = k+1; j <= n; j++){
            aux = 0;
            for(p = 1; p <= k-1; p++)
                aux += l[k][p] * u[p][j];
            u[k][j] = (a[k][j] - aux)/l[k][k];
            
        }
    }
    
    for( i = 1; i <= n; i++){
        det *=l[i][i];
    }
    
    cout << endl <<"El determinante es: "<<  det << endl;
}
void inv(){
	int r, c, o,x;
	int p, n, j, i, k, d;
    double a[100][100], u[100][100], l[100][100], det, aux;
    det = 1;
    
    cout << "Ingrese el orden de la matriz\n";
    cin >> n;
    
    cout << endl;
    
    cout << "Ingrese los valores para la matriz\n";
            for(i = 1; i <= n; i++){
                for(j = 1; j <= n; j++){
                    cin >> a[i][j];
                }
            }
            
            cout << endl;
            for(k = 1; k <= n; k++){
        u[k][k] = 1;
        for(i = k; i <= n; i++){
            aux = 0;
            for(p = 1; p <= k-1; p++)
                aux += l[i][p] * u[p][k];
            l[i][k] = a[i][k] - aux;
            
        }
        
        for(j = k+1; j <= n; j++){
            aux = 0;
            for(p = 1; p <= k-1; p++)
                aux += l[k][p] * u[p][j];
            u[k][j] = (a[k][j] - aux)/l[k][k];
            
        }
    }
    
    for( i = 1; i <= n; i++){
        det *=l[i][i];
    }
    cout << " La determinante es: "<< det << endl;
    if (det == 0) {
        cout <<" Es una matriz singular, no tiene inversa\n ";
    }
    else{
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j == (i + n))
            {
                a[i][j] = 1;
            }
        }
    }
    
    cout << endl;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
        {
            if (j != i)
            {
                aux = a[j][i] / a[i][i];
                for (k = 1; k <= n * 2; k++)
                {
                    a[j][k] = a[j][k] - (a[i][k] * aux);
                }
                
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        d = a[i][i];
        for (j = 1; j <= n * 2; j++)
        {
            a[i][j] = a[i][j] / d;
        }
    }
    cout << " la matriz inversa es: " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= n * 2; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    }
}
