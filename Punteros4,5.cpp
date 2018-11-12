/*4. Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento
del arreglo.*/

#include<iostream>
using namespace std;

int main(){
	int numeros[100],*dir_numeros,n,menor=9999999;
	cout<<"Cuantos numeros va a tener su arreglo: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	dir_numeros=numeros; // Posicion de memoria comienza numeros
	
	for(int i=0;i<n;i++){
		if(*dir_numeros<menor){
			menor=*dir_numeros;
		}
		dir_numeros++;
	}
	
	cout<<menor;
	
	return 0;
}
