//9. Escriba un programa que calcule el valor de: 1*2*3*...*m (factorial)

//5! = 5*4*3*2*1

#include<iostream>

using namespace std;

int main(){
	int numero,factorial=1;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial*=i;
	}
	
	cout<<"\nEl factorial de "<<numero<<" es: "<<factorial;
	
	
	return 0;
}
