/*2:Realice un programa que pida al usuario el nombre o ubicación de un fichero  de texto y, a continuacion
de lectura a todo el fichera*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;

void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}

void lectura(){
	ifstream archivo;
	string texto,name;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,name);
	
	archivo.open(name.c_str(),ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //Mientas no sea el final del archivo.
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}

