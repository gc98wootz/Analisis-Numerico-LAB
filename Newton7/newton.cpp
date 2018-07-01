void newton_rapson(void)
{
	int op;
	clrscr();
	select_ecuacion();
	gotoxy(27,1);cout<<"���� NEWTON RAPSON ۲��";
	op=opcion(7,23,6);
	clrscr();
	if(op==7)
	return;
	if (op == 6)
	{nuevo_polinomio();return;}
	gotoxy(7,2);cout<<"i";
	gotoxy(13,2);cout<<"Xi";
	gotoxy(28,2);cout<<"fx";
	gotoxy(43,2);cout<<"f'x";
	gotoxy(58,2);cout<<"Fx";
	gotoxy(2,1);cout<<"METODO NEWTON RAPSON :";
	if (op==5)
	{
	sol=poli.newton_rapson(valor_inicial);
	presentar_matriz2(poli);
	}
	if(op>0&&op<5)
	{
	sol=y[op-1].newton_rapson(valor_inicial);
	presentar_matriz2(y[op-1]);
	}
gotoxy(5,24);cout<<"La solucion aproximada de la ecuacion es X' :"<<sol;
getch();
};

void newton(){
  float n,error,e,x1,x,f,df;
  int a;
  cout<<"Ingrese n para encontrar su raiz"<<endl;
  cin>>n;
  cout<<"indique cantidad de iteranciiones"<<endl;
  cin>>a;
  cout<<"indique error de convergencia"<<endl;
  cin>>error;
  x1=n;
  f=pow(x1,3)-n;
  df=3*x1*x1;
  x=x1-(f/df);
  e=abs(x-x1);
  for(int i=0;i<a;i++){
    if(e>error){
      x1=x;
      f=pow(x1,3)-n;
      df=3*x1*x1;
      x=x1-(f/df);
      e=abs(x-x1);
    }
  }
  cout<<" x ="<< x <<endl;
}
