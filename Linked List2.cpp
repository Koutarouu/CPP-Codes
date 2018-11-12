/*2. Crear una lista que almacene "n" números reales y calcular su suma y promedio de estos.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *next;
};

void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void calcularPromedio(Nodo *);
int main(){
	Nodo *lista = NULL;
	int dato;
	char resp;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarLista(lista,dato); //Agregando un nuevo elemento a la lista
		
		cout<<"Desea agregar otro nodo(s/n): ";
		cin>>resp;
	}while(resp=='s' || resp=='S');
	cout<<"\nElementos de la lista: \n"<<endl;
	mostrarLista(lista);
	
	calcularPromedio(lista);
	
	return 0;
}

//Agregar elemento al final de la lista
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->next = NULL;
	
	if(lista == NULL){ //Si la lista esta vacia
		lista=nuevo_nodo; //agregamos el primer elemento a la lista
	}else{
		aux=lista; //aux apunta al inicio de la lista
		while(aux->next != NULL){ //Recorrer la lista
			aux = aux->next; // avanzamos posiciones en la lista
		}
		aux->next = nuevo_nodo;//Agrego el nuevo nodo a la lista
	}
	cout<<"\tElemento "<<n<<" agregado a lista correctamente"<<endl;
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
	while(lista != NULL){ //mientras no sea el final de la lista
		cout<<lista->dato<<" -> ";
		lista = lista->next; //avanzamos una posicion en la lista
	}
}

//Calcular el mayor y menor elemento de la lista
void calcularPromedio(Nodo *lista){
	float sumayprom=0,contador=0;
	while(lista != NULL){ //Recorremos la lista
		sumayprom+=lista->dato;
		lista=lista->next;
		contador+=1;
	}
	
	cout<<"\nLa suma de los elementos es: "<<sumayprom<<endl;
	sumayprom/=contador;
	cout.precision(2);
	cout<<"El promedio es: "<<sumayprom<<endl;
}
