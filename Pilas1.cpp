/*1. Ejercicio 1: Hacer un programa para agregar n�meros enteros a una pila, hasta que el usuario lo decida
, despu�s mostrar todos los n�meros introducidos en la pila. */

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *next;
};

void agregarPila(Nodo *&, int); //Prototipo de Funci�n
void sacarPila(Nodo *&, int &);
int main(){
	Nodo *pila = NULL;
	int dato;
	char rpt;
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		cout<<"\nDesea agregar otro elemento a PILA (s/n): ";
		cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
	
	cout<<"\nSacando todos los elementos de Pila: ";
	while(pila!=NULL){ //Mientras no sea el final de la pila
		sacarPila(pila,dato);
		if(pila != NULL)
			cout<<dato<<" , ";
		else
			cout<<dato<<".";
	}
	
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->next = pila;
	pila = nuevo_nodo;

	cout<<"\tElemento "<<n<<" ha sido agregado a PILA correctamente.";
}

void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->next;
	delete aux;
}
