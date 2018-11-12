/*Linked List*/
/*Lista simplemente enlazada
Cada nodo contiene un unico enlace que conecta ese nodo al noso siguiente o nodo sucesor.La lista es
eficiente en recorridos directos adelante.
Dobliemente Enlazada
Cada nodo contiene dos enlaces, uno a su nodo predecesir y el otro a su nodo sucesor. La lista es
eficiente tanto en recorridos directos adelante como en inverso atras
Circular simplemente Enlazada
Es una lista enlazada simplemente en la que el ultimi elemento (cola) se enlaza al primer elemento (cabeza)
de tal modo que la lista puede ser recorrida de modo circular (en anillo).
CIRCULAR DOBLEMENTE ENLAZADA:
Una lista doblemente enlazada en la que el ultimo elemento se enlaza al primer elemento y viceversa.
Esta lista se puede recorrer de modo circular(en anillo) tanto en direccion directa(adelante) como inversa
(atras)

Operaciones en Listas Enlazadas.
Insertar elementos en una lista enlazada.
1.Crear un nuevo nodo.
2.Asignar a nuevo_nodo->dato el elemento que queremos incluir a la lista.
3.Creae dos nodos auxiliares y asignar lista al primero de ellos.
4.Insertar el elemento a la lista. caso 1(Lista->NULL)esta vacia y solo tenemos que añadir un unico
elemento
caso 2: Tiene un elemento y podemos añadir al principio o al final
caso 3: mas de 1 Al principio,final y/o enmedio
Mostrar los elemento de una lista enlazada.
1.Crear un nuevo nodo (actual)
2.Igualar ese nuevo nodo (actual) a lista
3.Recorrer la lista de inicio a fin
Buscar un elemento en una lista enlazada.
1.Crear un nuevo nodo (actual)
2.Igualara ese nuevo nodo (actual) a la lista
3.Recorrer la lista
Eliminar un elemento en una lista enlazada.
1. Preguntar si la lista no esta vacia
2. Crear un *aux_borrar y *anterior=NULL
3. Igualar *aux_borrar al inicio de la lista
4. Recorrer la lista.
5. Eliminar el elemento.
Eliminar todos los elementos de la lista
1.Crear un nodo *aux e igualarlo al inicio de la lista.
2.Guardar el dato que queremos eliminar dentro de *aux
3.Pasar lista a siguiente nodo.
4.Eliminar aux.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *next;
};

Nodo *lista = NULL;
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *,int);
void eliminarNodo(Nodo *&,int);
void eliminarLista(Nodo *&,int&);

int main(){	
	menu();
	
	return 0;
}

void menu(){
	int opc;
	int dato;

	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Buscar un elemento en lista\n";
		cout<<"4. Eliminar un nodo de la lista\n";
		cout<<"5. Dejar vacia la linked list.\n";
		cout<<"6. Salir\n";
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarLista(lista,dato);
				cout<<endl;
				system("pause");
				break;
			case 2: mostrarLista(lista);
					cout<<endl;
					system("pause");
					break;
			case 3: cout<<"\nDigite un numero ah buscar: ";
					cin>>dato;
					buscarLista(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nDigite el elemento que desea eliminar: ";
					cin>>dato;
					eliminarNodo(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			case 5:
					while(lista!=NULL){ //mientras no sea el final de la lista
						eliminarLista(lista,dato);
						cout<<dato<<" -> ";
					}
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opc!=6);
}

//InsertarElemento ala lista en orden ascendente
void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->next;
	}
	
	if(lista == aux1)
		lista = nuevo_nodo;
	else
		aux2->next = nuevo_nodo;
	
	nuevo_nodo->next = aux1;
	
	cout<<"\tElemento "<<n<<" insertado a lista correctamente."<<endl;
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		cout<<actual->dato<<" -> ";
		actual=actual->next;
	}
	
}

void buscarLista(Nodo *lista,int n){
	bool band=false;
	Nodo *actual = new Nodo();
	actual=lista;
	
	while(actual!=NULL && actual->dato<=n){
		if(actual->dato == n){
			band=true;
		}
		actual=actual->next;
	}
	
	if(band==true)
		cout<<"Elemento "<<n<<" SI ah sido encontrado en lista\n";
	else
		cout<<"Elemento "<<n<<" NO ah sido encontrado en lista\n";
}

void eliminarNodo(Nodo *&lista,int n){
	//Preguntar si la lista no esta vacia
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		
		//Recorrer la lista
		while((aux_borrar != NULL) && (aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->next;
		}
		
		//El elemento no ah sido encontrado
		if(aux_borrar == NULL){
			cout<<"El elemento no ah sido encontrado."<<endl;
		}
		//El primer elemento es el que vamos a eliminar
		else if(anterior == NULL){
			lista = lista->next;
			delete aux_borrar;
		}
		//El elemento esta en la lista pero, no es el primer nodo
		else{
			anterior->next = aux_borrar->next;
			delete aux_borrar;
		}
	}
}

//Dejar vacia a la lista
void eliminarLista(Nodo *&lista,int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista=aux->next;
	delete aux;
}
