//Longitud de una cadena de caracteres - Funcion strlen(

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "hola";
	int longitud=0;
	
	longitud=strlen(palabra);
	
	cout<<"Numero de elementos de la cadena: "<<longitud<<endl;
	
	
	return 0;
}
