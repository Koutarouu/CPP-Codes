/*7. Pedir su nombre al usuario y devolver el número de vocales que hay.*/

#include<iostream>
#include<string.h>

using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
		
	cout<<"\nVocales encontradas: "<<contandoVocales(nombreUsuario)<<endl;
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	strupr(nombreUsuario); //transformando a Mayuscula el nombre
	
}

int contandoVocales(char *nombre){
	int cont=0;
	
	while(*nombre){//mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	
	return cont;
}
