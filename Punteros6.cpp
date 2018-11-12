/*6. Hacer una funci�n para almacenar N n�meros en un arreglo din�mico, posteriormente en otra funci�n
buscar un n�mero en particular. NOTA: Puedes utilizar cualquier m�todo de b�squeda(Secuencial o Binaria)*/

#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();//Prototype
void buscar(int *, int, int);

int nElementos, *elemento, item;

int main(){
	pedirDatos();
	
	cout<<"Digite el elemento a buscar: ";cin>>item;
	buscar(elemento,nElementos,item);
	
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

void buscar(int *elemento, int nElementos, int item){
	int inf,sup,mitad;
	char band='F';
	inf = 0;
	sup = nElementos-1;
	
	while(inf<=sup){
		mitad = (inf+sup)/2;
		
		if(*(elemento+mitad)==item){
			band = 'V';
			break;
		}
		if(*(elemento+mitad)>item){
			sup=mitad-1;
			//mitad=(inf+sup)/2;
		}
		if(*(elemento+mitad)<item){
			inf = mitad+1;
			//mitad=(inf+sup)/2;
		}
	}
	
	if(band=='V')
		cout<<"El numero "<<item<<" ah sido encontrado en la posicion: "<<mitad<<endl;
	else
		cout<<"El numero NO a sido encontrado.";
}

