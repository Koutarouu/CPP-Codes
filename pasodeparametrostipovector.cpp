/*Paso de parámetros de tipo vector

Parametros de la función:
	void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)
	
Llamada a la función
	nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadrados de los elementos del vector

#include<iostream>
using namespace std;

void cuadrado(int vect[],int);
void muestra(int vect[],int);
int main(){
	const int TAM = 5;//De tipo constante
	int vect[TAM]={1,2,3,4,5};
	
	cuadrado(vect,TAM);
	muestra(vect,TAM);
	
	return 0;
}

void cuadrado(int vect[],int tam){
	for(int i=0;i<tam;i++){
		vect[i]*=vect[i];
	}
}

void muestra(int vect[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vect[i]<<" ";
	}
}
