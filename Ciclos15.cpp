/*15. Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en ese mismo rango[1-100],e
indicarle al usuario si el numero que dígito es menor o mayor al numero aleatorio,
así hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int i,numero,dato,intentos=0;
	
	srand(time(NULL)); //generar un numero aleatorio;
	dato= 1 + rand() % (100); //25
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
		if(numero>dato){
			cout<<"\nDigite un numero menor"<<endl;
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor"<<endl;
		}
		intentos++;
	}while(numero!=dato);
	
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO"<<endl;
	cout<<"Numero de intentos: "<<intentos<<endl;
	
	return 0;
}
