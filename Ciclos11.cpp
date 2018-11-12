/*11. Escriba un programa que calcule el valor de:2^1+2^2+2^3+...+2^n*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numero,suma=0,elevacion;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=numero;i++){
		elevacion=pow(2,i);
		suma+=elevacion;
	}
	
	cout<<"La suma total es: "<<suma;
	
	return 0;
}
