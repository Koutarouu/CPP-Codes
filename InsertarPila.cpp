//PILAS
/*Una pila es una estructura de datos de entradas ordenadas tales que solo se pueden introducir y eliminar
por un extremo, llamado cima. Input first Output 
Las operaciones usuales en la pila son Insertar y Quitar. La operación Insertar (push) añade un elemento
en la cima de la pila y la operación Quitar (pop) elimina o saca un elemento de la pila.
Entrada: MAC
Salida: CAM 
Insertar elementos en la pila
Para insertar elementois en la pila, solo hay que seguir 4 pasos:
1. Crear el espacio en memoria para almacenar un nodo.
pila = NULL;
2. Cargar el valor de dentro del nodo(dato).
3. Cargar el puntero pila dentro del nodo (*siguiente)
4. Asignar el nuevo nodo a pila. LIFO
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};
void agregarPila(Nodo *&,int); //Prototipo
int main(){
	Nodo *pila=NULL;
	int n1,n2;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	agregarPila(pila,n1);
	cout<<"Digite otro numero: ";
	cin>>n2;
	agregarPila(pila,n2);
	
	return 0;
}
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	cout<<"\nElemento "<<n<<" agregado a la PILA correctamente"<<endl;
}
