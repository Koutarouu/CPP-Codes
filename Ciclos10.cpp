//10.SUMA DE FACTORIALES

#include<iostream>

using namespace std;

int main(){
	int numero,factorial=1,suma=0;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial*=i;
		suma+=factorial;
	}
	
	cout<<"La suma de los factoriales es: "<<suma;
	
	
	return 0;
}
