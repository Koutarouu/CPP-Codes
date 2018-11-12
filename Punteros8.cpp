/*8. Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o
,u; en la cadena de caracteres*/

/*7. Pedir su nombre al usuario y devolver el número de vocales que hay.*/

#include<iostream>
#include<string.h>

using namespace std;

void pedirDatos();
void contandoVocales(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
		
	contandoVocales(nombreUsuario);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite su cadena: ";
	cin.getline(nombreUsuario,30,'\n');
	strupr(nombreUsuario); //transformando a Mayuscula el nombre
	
}

void contandoVocales(char *nombre){
	int conta=0,conto=0,conti=0,conte=0,contu=0;
	
	while(*nombre){//mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A': conta++; break;
			case 'E': conte++; break;
			case 'I': conti++; break;
			case 'O': conto++; break;
			case 'U': contu++; break;
		}
		nombre++;
	}
	
	cout<<"Vocales A encontradas: "<<conta<<endl;
	cout<<"Vocales E encontradas: "<<conte<<endl;
	cout<<"Vocales I encontradas: "<<conti<<endl;
	cout<<"Vocales O encontradas: "<<conto<<endl;
	cout<<"Vocales U encontradas: "<<contu<<endl;
}
