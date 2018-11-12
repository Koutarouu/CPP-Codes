/*14. Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un vector
con los elementos impares del vector recibido*/

#include<iostream>
using namespace std;
void pedirDatos();
void impares(int vect[],int);

int vect[100],tam;
int main(){
	pedirDatos();
	impares(vect,tam);
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

void impares(int vect[],int tam){
	for(int i=0;i<tam;i++){
		if(vect[i]%2!=0)
			cout<<vect[i]<<" ";
	}
}
