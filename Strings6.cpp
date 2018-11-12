//Convertir 2 cadena de minusculas a MAYUSCULAS. Compararlas, ydecir si son iguales o no.

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[30];
	char palabra2[30];
	
	cout<<"Digite dos palabras: ";
	cin.getline(palabra,30,'\n');
	cin.getline(palabra2,30,'\n');
	strupr(palabra);
	strupr(palabra2);
	if (strcmp(palabra,palabra2)==0){
		cout<<"Ambas palabras son iguales";
	}else{
		cout<<"Son diferentes";
	}
	
	return 0;
}
