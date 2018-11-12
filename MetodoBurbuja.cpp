/*Metodo Burbuja Es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento de la lista
con el siguiente intercambiandolos de posicion si estan en el orden equivocado. Es necesario revisar
varias veces toda la lista hasta que no se necesiten mas intercambios, lo cual significa que la lista
esta ordenada.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numeros[]={4,1,2,3,5};
	int i,j,aux;
	
	//Algoritmo del metodo burbuja
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(numeros[j] > numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl<<"Orden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	return 0;
}
