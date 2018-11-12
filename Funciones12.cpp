/*12.Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector está ordenado
crecientemente. Sugerencia: comprueba que para todas las posiciones del vector salvo para la 0, el
elemento del vector es mayor o igual que el elemento que el precede en el vector.*/

#include<iostream>
using namespace std;
void pedirDatos();
char is_sorted(int vect[],int);
int tam,vect[100];
int main(){
	
	pedirDatos();
	if(is_sorted(vect,tam)=='V')
		cout<<"El vector esta ordenado crecientemente.";
	else
		cout<<"El vector no esta ordenado crecientemente.";
	
	return 0;
}


void pedirDatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vect[i];
	}
}

char is_sorted(int vect[],int tam){
	char band='V';
	for(int i=1;i<tam;i++){
		if(vect[i]<vect[i-1]){
			band='F';
		}
	}
	return band;
}
