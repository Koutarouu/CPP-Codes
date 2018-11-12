/*Colas.
Una cola es una estructura de datos, caracterizada por ser una secuencia de elementos en la que la
operaci'on de insercciòn se realiza por un extremo y la extracciòn por el otro.
Las operaciones usuales en las colas son Insertar y Quitar. La operación Insertar añade un elemento por el
extremo final de la cola, y la operación Quitar elimina o extrae un elemento por el extremo opuesto. FIFO
First Input first Output.
Insertar elementos en una cola:
Para insertar elementos en una cola, sólo hay que seguir 3 pasos:
1. Crear espacio en memoria para almacenar un nodo.
frente->NULL;
fin->NULL;
2. Asignar ese nuevo nodo al dato que queremos insertar
nuevo_nodo->dato=n;
nuevo_nodo->siguiente=NULL;
3. Asignar los punteros frente y fin hacia el nuevo nodo.
=====================================================================================================
Eliminar elementos de una cola
1.Obtener el valor del nodo
2.Crear un nodo aux y asignarle el frente de la cola.
3.Eliminar el nodo del frente de la cola.
*/
#include<iostream>
using namespace std;
struct Nodo{
	int dato;
	Nodo *next;
};
//Prototipos de Función
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &);

int main(){
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	//Eliminar los elementos de la cola
	cout<<"\nQuitando los nodos de la cola: "<<endl;
	//Si el frente(primera posicion) de la cola es diferente de null entonces hay mas nodos
	while(frente != NULL){ 
		suprimirCola(frente,fin,dato);
		
		if(frente != NULL)
			cout<<dato<<" , ";
		else
			cout<<dato<<".";
	}
	return 0;
}

//Funcion para insertar elementos en una cola
void insertarCola(Nodo *&frente,Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->next=NULL;
	
	if(cola_vacia(frente))
		frente = nuevo_nodo;
	else
		fin->next = nuevo_nodo;
		
	fin=nuevo_nodo;
	cout<<"Elemento "<<n<<" insertado correctamente\n";
}

//Funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true : false;
}

//Funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente->next;
	}
	delete aux;
}
