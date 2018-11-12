//Añadir texto al final de un archivo

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void add();

int main(){
	add();
	
	system("pause");
	return 0;
}

void add(){
	ofstream archivo;
	string texto;
	
	archivo.open("programacion.txt",ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite el texto que quiere aniadir: ";
	getline(cin,texto);
	
	archivo<<texto<<endl;
	
	archivo.close(); //Cerramos el archivo
}
