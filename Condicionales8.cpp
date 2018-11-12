/*7.Escribe un programa que lea de la entrada estándar tres números.
Después debe leer un cuarto número e indicar si el número coincide
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
