/*1.Pograma que imprime cadenas de longitud mayor a 10*/

//Longitud de una cadena de caracteres - Funcion strlen(

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[30];
	int longitud=0;
	
	cout<<"Digite una cadena de caracteres: ";
	cin.getline(palabra,30,'\n');
	longitud=strlen(palabra);
	
	if(longitud>10)
		cout<<palabra<<endl;
	
	return 0;
}
