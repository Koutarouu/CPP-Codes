//Paso de Parametros por Referencia

#include<iostream>
#include<stdio.h>
using namespace std;

void valNuevo(int&,int&);
int main(){
	int num1,num2;
	
	cout<<"Digite 2 numeros: ";
	//cin>>num1>>num2;
	scanf("%i %i",&num1,&num2);
	
	valNuevo(num1,num2);
	
	cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;
	
	return 0;
}

void valNuevo(int& xnum, int& ynum){ //le estamos diciendo la direccion en memoria
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
	
	xnum=89;
	ynum=77;
}
