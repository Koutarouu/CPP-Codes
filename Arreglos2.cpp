/*1. Escribe un programa que defina en vector de numeros y calcule la multiplicacion acumulada
de sus elementos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5]={1,2,3,4,5},mult=1;
	
	for(int i=0;i<5;i++){
		mult*=numeros[i];
	}
	cout<<"La multiplicacion de los elementos del vector es: "<<mult<<endl;
	getch();
	return 0;
}
