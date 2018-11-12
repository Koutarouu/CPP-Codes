/*16. Realice un programa que calcule la descomposicion en factores primos de un numero entero.*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero para descomponer en primos: ";cin>>numero;
	
	cout<<"\nDescomponiendo en factores primos: ";
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero /= i;
		}
	}
	
	return 0;
}
