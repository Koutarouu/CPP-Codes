/*7.Escribe un programa que lea de la entrada est�ndar tres n�meros.
Despu�s debe leer un cuarto n�mero e indicar si el n�mero coincide
con alguno de los introducidos con anterioridad.*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4;
	
	cout<<"Digite 3 numeros: ";cin>>n1>>n2>>n3;
	cout<<"Digite un cuarto numero: ";cin>>n4;
	
	if(n4==n1 || n4==n2 || n4==n3){
		cout<<"El cuarto numero es igual que alguno de los 3 numeros";
	}else{
		printf("El cuarto numero es diferente a los 3");
	}
	
	
	
	return 0;
}
