//Busqueda Binaria.

#include<iostream>
using namespace std;
int main(){
	int numeros[] = {1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band='F';
	
	dato = 2;
	
	//Algoritmo de la Busqueda Binaria
	inf = 0;
	sup = 5;
	
	while(inf<=sup){
		mitad = (inf+sup)/2;
		
		if(numeros[mitad] == dato){
			band = 'V';
			break;
		}
		if(numeros[mitad] > dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(numeros[mitad] < dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
	}
	
	if(band=='V'){
		cout<<"El numero ah sido encontrado en la posicion: "<<mitad<<endl;
	}
	else{
		cout<<"El numero NO a sido encontrado.";
	}
	
	return 0;
}
