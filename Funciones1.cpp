/*1. Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros,
multiplique estos dos números y despliegue el resultado.*/
#include<stdio.h>
#include<iostream>
using namespace std;

void pedirDatos();
void mult(float x, float y);

float n1,n2;

int main(){
	
	pedirDatos();
	mult(n1,n2);
	
	return 0;
}

void pedirDatos(){
	cout<<"Type 2 numbers: ";
	scanf("%f %f",&n1,&n2);
}
void mult(float x, float y){
	cout<<n1*n2;
}
