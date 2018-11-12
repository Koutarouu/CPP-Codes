/*13.Realiza una función que tome como parámetros un vector de números y su tamaño y cambie el signo de
los elementos del vector */

#include<iostream>
using namespace std;

void pedirDatos();
void cambiarSigno(int vect[],int);
void mostrarVector(int vect[],int);
int vect[100],tam;

int main(){
	pedirDatos();
	cambiarSigno(vect,tam);
	mostrarVector(vect,tam);
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamanio del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vect[i];
	}	
}

void cambiarSigno(int vect[],int tam){
	for(int i=0;i<tam;i++)
		vect[i]*=-1;
}

void mostrarVector(int vect[],int tam){
	cout<<"\nMostrando los elementos del vector con signo cambiado.";
	for(int i=0;i<tam;i++)
		cout<<vect[i]<<" ";	
}
