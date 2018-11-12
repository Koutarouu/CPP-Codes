/*lECTURA DE UN ARCHIVO DE TEXTO*/

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
	string texto;
	
	archivo.open("programacion.txt",ios::in); //Abrimos el archivo en modo lectura
	
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

