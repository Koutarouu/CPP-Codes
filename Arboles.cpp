//Arboles
//Estructura de datos no lineal y dinamica
//Un �rbol consta de un conjunto finito de elementos denominados nodos y un conjunto finito de l�neas
//denominados nodos y un conjunto finito de l�neas dirigidas, denominadas ramas, que conectan los nodos.
/*Propiedades del �rbol:
Hojas son los ultimos elementos de un arbol
- Longitud de camino
La longitud de camino para encontrar un nodo es el numero de nodos - 1
- Altura de un nodo
Necesitamos ver desde las hojas hacia arriba es nodos - 1 de igual forma
- Profundidad de un nodo. Nivel
Mirar hacia abajo empezando desde el nivel 0
- Nodos hermanos
Son nodos que estan al mismo nivel y que tienen en comun al mismo padre
- Orden de un �rbol /es el maximo numero de hijos que puede tener un nodo
Orden 2: Un nodo puede tener 0,1 � 2 hijos
Arboles Binario
Un arbol binario es �rbol de orden 2. Se conoce el nodo de la izquierda como hijo izquierdo y el nodo de
la derecha como hijo derecho
Un arbol binario es una estructura recursiva. Un arbol binario se divide en tres subconjuntos desjuntos:
- Nodo Ra�z
- Sub�rbol izquierdo
- Sub�rbol derecho
Tipos Arbol Lleno:
Es aquel en el que todos sus nodos excepto los del ultimo nivel tienen dos hijos
Arbol Completo
Es como el arbol lleno solo que en esta alguno de las dos ramas principales ya no llega al ultimo nivel
y el subarbol izquierdo casi siempre tiene mas nodos que el subarbol derecho
Arbol Degenerado
Este arbol solo saca hijos por un solo lado el principal solo tiene un hijo y es casi casi una lista enlazada
Arbol Binario de B�squeda?
Es aquiel que dado un nodo, todos los datos del sub�rbol izquierdo son menores, mientras que todos los datos
del sub�rbol derecho son mayores.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//Prototipos
void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main(){
	
	menu();
	
	return 0;
}

//Funcion de menu
void menu(){
	int dato,opc,contador=0;
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostar el arbol completo"<<endl;
		cout<<"3. Buscar un elemento en el arbol"<<endl;
		cout<<"4. Recorrer el arbol en PreOrden"<<endl;
		cout<<"5. Recorrer el arbol en InOrden"<<endl;
		cout<<"6. Recorrer el arbol en PostOrden"<<endl;
		cout<<"7. Eliminar un nodo del arbol"<<endl;
		cout<<"8. Salir."<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case 1: cout<<"\nDigite un numero: ";
					cin>>dato;
					insertarNodo(arbol,dato,NULL); //Insertamos un nuevo nodo
					cout<<"\n";
					system("pause");
					break;
			case 2: cout<<"\nMostrando el arbol completo:\n\n";
					mostrarArbol(arbol,contador);
					cout<<endl;
					system("pause");
					break;
			case 3: cout<<"\nDigite el elemento a buscar: ";
					cin>>dato;
					if(busqueda(arbol,dato)){
						cout<<"\nElemento "<<dato<<" a sido encontrado en el arbol\n";
					}else{
						cout<<"\nElemento no encontrado\n";
					}
					cout<<"\n";
					system("pause");
					break;
			case 4: cout<<"\nRecorrido en preOrden: ";
					preOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 5: cout<<"\nRecorrido en inOrden: ";
					inOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 6: cout<<"\nRecorrido en postOrden: ";
					postOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 7: cout<<"\nDigite el nodo a eliminar: ";
					cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opc!=8);
}

//Funcion para crear un nuevo nodo
Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol,int n,Nodo *padre){
	if(arbol == NULL){ //si el arbol esta vac�o
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol = nuevo_nodo; //estableciendolo en la raiz del arbol.
	}else{ //Si el arbol tiene un nodo o mas de uno
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raiz
		if(n < valorRaiz){ //Si el elemento es menor a la raiz, insertamos en el lado izquierdo
			insertarNodo(arbol->izq,n,arbol);
		}else{
			//Si el elemento es mayor a la raiz insertamos en el lado derecho
			insertarNodo(arbol->der,n,arbol);
		}
	}
}

//Funcion para mostrar el arbol completo
void mostrarArbol(Nodo *arbol,int cont){
	if(arbol==NULL) //Si el arbol esta vacio
		return;
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}

//Funcion para buscar un elemento en el arbol
bool busqueda(Nodo *arbol,int n){
	if(arbol == NULL){ //Si el arbol esta vacio
		return false;
	}else if(arbol->dato == n){ //Si el nodo es igual al elemento
		return true;
	}else if(n<arbol->dato){
		return busqueda(arbol->izq,n);
	}else{
		return busqueda(arbol->der,n);
	}
}

//Funcion para recorrido en profundidad - PreOrden
void preOrden(Nodo *arbol){
	if(arbol == NULL){ //Si el arbol esta vacio no hay nada que mostrar
		return;
	}else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

//Funcion para recorrido en profundidad - InOrden
void inOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}

//Funcion para recorrido en profundidad - PostOrden
void postOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//Eliminar un nodo del arbol
void eliminar(Nodo *arbol,int n){
	if(arbol==NULL){ //Si el arbol esta vacio
		return; //No hago nada
	}else if(n < arbol->dato){ //Si el valor es menor
		eliminar(arbol->izq,n); //Busca por la izquierda
	}else if(n > arbol->dato){ //Si el valor es mayor
		eliminar(arbol->der,n); //Busca por la derecha
	}else{ //Si ya encontraste el valor
		eliminarNodo(arbol);
	}
}

//Funcion para determinar el nodo mas izquiero posible
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){
		return NULL; //Retorno nulo si el arbol esta vacio
	}
	if(arbol->izq){ //Si tiene hijo izq
		return minimo(arbol->izq); //Buscamos la parte mas izquierda posible
	}else{ //Si no tiene hijo izq
		return arbol; //retornamos el mismo nodo
	}
}

//Funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq=nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){
		//Procedemos a asignarle su nuevo padre
		nuevoNodo->padre=arbol->padre;
	}
}

//Funcion para destruir un nodo
void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	delete nodo;
}

//Funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){ //Si el nodo tiene hijo izquierdo y derecho
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){ //Si tiene hijo izquierdo
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if(nodoEliminar->der){ //Si tiene hijo derecho
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{ //No tiene hijos
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
}
/*
Operaciones en �rboles binarios de Busqueda:
Insertar un nodo en el �rbol.
Mostrar el �rbol completo.
Buscar un nodo espec�fico.
Recorrer el �rbol.
Visitar cada nodo del arbol una vez recorrido en anchura y en profundidad
Recorrido en PreOrden:
(ra�z, izquierdo, derecho). Para recorrer un �rbol binario no vac�o en PreOrden, hay que realizar las siguientes
operaciones recursivamente en cada nodo, comenzando con el nodo ra�z:
Visite la ra�z
Atraviese el sub-�rbol izquierdo
Atraviese el sub-�rbol derecho
Recorrido en InOrden:
(izquierdo, raiz, derecho). Para recorrer un �rbol binario no vac�o en InOrden, hay que realizar la siguientes
operaciones recursivamente en cada nodo:
1.Atraviese el sub-�rbol izquierdo 2.Visite la ra�z 3.Atraviese el sub-�rbol derecho
Recorrido en PostOrden:
(izquierdo,derecho,raiz).Para recorrer un �rbol binario no vac�o en PostOrden, hay que realizar las siguientes
operaciones recursivamente en cada nodo:
1.Atraviese el sub-�rbol izquierdo 2.Atraviese el sub-�rbol derecho 3.Visite la ra�z
Borrar un nodo del �rbol.
Borrar un nodo con dos sub�rboles hijos => a la derecha y luego a el nodo mas a la izquierda posible
Borrar un Nodo con un sub�rbol hijo
El hijo toma el lugar del padre y eliminamos el nodo
Insertar un Nodo en el �rbol.
1.Creamos el nodo considerar que el arbol puede estar vac�o / El �rbol ya tiene un nodo o m�s
*/

