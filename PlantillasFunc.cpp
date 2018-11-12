/*Plantillas de Función

Ex: Sacar el valor absoluto de un número */

#include<iostream>
using namespace std;

template <class TIPOD> //Prefijo de la plantilla cualquier tipo de dato
void mostrarAbs(TIPOD numero); //puedo mandar cualquier numero
int main(){
	int num1= -4;
	float num2= -57.77;
	double num3= -123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero*=-1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
	
}
