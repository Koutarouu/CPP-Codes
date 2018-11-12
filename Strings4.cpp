//Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle
//al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje
//completo "Hola que tal (Nombre del usuario)"

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "Hola que tal ";
	char nombre[30];
	
	cout<<"Digite su nombre: ";cin.getline(nombre,30,'\n');
	strcat(cad1,nombre);
	cout<<cad1;
	return 0;
}
