/*Transmisión de Direcciones
Ejemplo: Intercambiar el valor de 2 variables.*/

#include<iostream>
using namespace std;

void swap(float *, float *);

int main(){
	float num1=20.08,num2=7.77;
	
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	swap(&num1,&num2); //Call to function swap
	
	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"El nuevo valor de num1: "<<num1<<endl;
	cout<<"El nuevo valor de num2: "<<num2<<endl;
	
	return 0;
}

void swap(float *dirN1, float *dirN2){
	float aux;
	
	//Swappeando los valores de las variables.
	aux = *dirN1;
	*dirN1=*dirN2;
	*dirN2=aux;
}
