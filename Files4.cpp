
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
	string texto,name;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,name);
	
	archivo.open(name.c_str(),ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite el texto que quiere aniadir: ";
	getline(cin,texto);
	
	archivo<<texto<<endl;
	
	archivo.close(); //Cerramos el archivo
}
