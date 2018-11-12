#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;
void escribir();
int main(){
	escribir();
	
	system("pause");
	return 0;
}

void escribir(){
	int n;
	ofstream archivo;
	string name,frase;
	cout<<"Digite el nombre del archivo: ";
	getline(cin,name);
	cout<<"Digite el numero de frases que quiere agregar al archivo: ";
	cin>>n;
	//"./pruebas/prueba.txt"
	archivo.open(name.c_str(),ios::out); //Abriendo el archivo como no existe lo crea y lo abre
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"\nDigite el texto del archivo: ";
		getline(cin,frase);
		archivo<<frase<<endl;
	}	
	
	archivo.close(); //Cerrar el archivo
}
