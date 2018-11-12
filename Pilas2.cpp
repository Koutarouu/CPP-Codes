/*2. Hacer un programa en C++, utilizando Pilas que contenga el siguiente menu: 

1. Insertar un caracter a la pila
2. Mostrar todos los elementos de la pila
3. Salir*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *next;
};

void agregarPila(Nodo *&, char); //Prototipo de Función
void show_Pila(Nodo *&, char &);

int main(){
	Nodo *pila = NULL;
	char dato;
	int rpt;
	do{
		
		cout<<"Opciones\n1.Insertar un carácter a la pila"<<endl;
		cout<<"2.Mostrar todos los elementos de la pila"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Digite su opcion: ";
		cin>>rpt;
		switch(rpt){
			case 1:
				cout<<"Digite un caracter: ";
				cin>>dato;
				agregarPila(pila,dato);
				break;
			case 2:
				show_Pila(pila,dato);
				break;
			default: cout<<":D"<<endl; break;
		}
		system("pause");
		system("cls");
	}while((rpt!=3));
	
	return 0;
}

void agregarPila(Nodo *&pila, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->next = pila;
	pila = nuevo_nodo;

	cout<<"\tElemento "<<n<<" ha sido agregado a PILA correctamente."<<endl;
}

void show_Pila(Nodo *&pila,char &n){
	Nodo *aux=pila;
    cout<<"\n";
    while(aux !=NULL){
        cout<<aux->dato<<" ,";
        aux=aux->next;
	}
}
