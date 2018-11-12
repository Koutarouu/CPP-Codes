/*2.Programa que solicite al usuario la pulsacion de una tecla y el programa identifique si es un digito
, es una letra minuscula, mayuscula, caracter especial, caracter de accion y control.*/
#include<iostream>
#include <stdio.h>

using namespace std;
int main(){
	char letra;
    printf("Ingrese una letra: ");
    scanf("%c",&letra);
    if(letra >= 'a' && letra <= 'z'){
    	printf("\n-> Es minuscula ");
	}
    else if(letra >= 'A' && letra <= 'Z'){
        printf("\n-> Es mayuscula ");    	
	}
    else if(letra >='0' && letra <= '9'){
        printf("\n-> Es un Digito ");    	
	}
	else if(letra >='!' && letra <= '/'){
        printf("\n-> Es un caracter de accion ");    	
	}
	else if(letra >='ø' && letra <= 'È'){
        printf("\n-> Es un caracter especial ");    	
	}else{
		cout<<"Es un caracter de control. "<<endl;
	}
	return 0;
}
