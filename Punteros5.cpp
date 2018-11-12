/*5. Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números
en orden ascendente y mostrarlos en pantalla. */

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();//Prototype
void ordenarArray(int *, int);
void mostrarArray(int *, int);

int nElementos, *elemento;

int main(){
	
	pedirDatos();
	ordenarArray(elemento,nElementos);
	mostrarArray(elemento,nElementos);
	
	delete[] elemento; //liberar la memoria utilizada para el arreglo dinamico
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del Arreglo: ";
	cin>>nElementos;
	
	elemento= new int[nElementos]; //crear el arreglo dinamico
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i]
	}
}

void ordenarArray(int *elemento, int nElementos){
	int aux;
	
	//Ordenar el arreglo con el metodo Burbuja
	
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){ //elemento[j] > elemento[j+1]
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArray(int *elemento, int nElementos){
	cout<<"\n\nMostrando arreglo ordenado: ";
	for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" "; //elemento[i]
	}
}

