//Copiar el contenido de una cadena a otra - Funcion strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[30];
	char palabra2[30];
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(palabra,30,'\n');
	strcpy(palabra2,palabra);
	cout<<palabra2<<endl;
	
	return 0;
}
