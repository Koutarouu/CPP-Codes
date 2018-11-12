/*Ordenamiento por Seleccion
Es una algoritmo de oredamiento que requiere O(n^2) operacion para ordenar una lista de n numeros. Su 
funcionamiento es el siguiente:

1.Buscar el mínimo elemento de la lista.
2.Intercambiar con el primer elemento.
3.Buscar el mínimo del resto de la lista.
4.Intercambiar con el segundo.
5.Y así sucesivamente.
*/
#include<iostream>
using namespace std;
int main(){
	int i,numeros[] = {3,2,1,5,4},j,aux,min;
	
	//Algoritmo del Ordenamiento por Selección
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(numeros[j] < numeros[min]){
				min = j; //2<3 no entonces min ahora es 2/ 1 es menor que min(2) si entonces ahora min es 1
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
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
