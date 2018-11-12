/*Ordenamiento por Inserccion. 
Es una manera muy natural de ordenar para un ser humano, y puede usarse fácilmente para ordenar un mazo
de cartas numeradas en forma arbitraria. Requiere O(n al cuadrado) operaciones para ordenar una lista de
n elementos*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[]={4,2,3,5,1};
	int i,pos,aux;
	
	//Algoritmo del Ordenamiento por inserccion
	for(i=0;i<5;i++){
		pos = i;
		aux=numeros[i];
		
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--; // para que sea hasta que este en la posicion cero y ya no se cumpla la condicion ese numero ya estaria ordenado
		}
		numeros[pos] = aux;//Para que vaya refrescando por cada iteracion
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
