/*Ejercicio 9: Realice un programa que lea una cadena de caracteres de la entrada estándar
y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char frase[30];
	int i,cont_a=0,cont_e=0,cont_i=0,cont_o=0,cont_u=0;
	
	cout<<"Digite una frase: ";
	cin.getline(frase,30,'\n');
	
	for(i=0;i<30;i++){
		switch(frase[i]){
			case 'a': cont_a++; break;
			case 'e': cont_e++; break;
			case 'i': cont_i++; break;
			case 'o': cont_o++; break;
			case 'u': cont_u++; break;
		}
	}
	
	cout<<"Vocal a: "<<cont_a<<endl;
	cout<<"Vocal e: "<<cont_e<<endl;
	cout<<"Vocal i: "<<cont_i<<endl;
	cout<<"Vocal o: "<<cont_o<<endl;
	cout<<"Vocal u: "<<cont_u<<endl;
	return 0;
}
