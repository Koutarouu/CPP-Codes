/*6. Escriba un programa que calcule z^y, donde tanto x como y son enteros positivos, sin utilizar
la funcion pow*/

#include<iostream>

using namespace std;

int main(){
	int x,y,potencia=1;
	
	cout<<"Digite el valor de x seguido de su potencia y: ";cin>>x>>y;
	for(int i=1;i<=y;i++){
		potencia*=x;
	}
	
	cout<<"\nEl resultado de "<<x<<" a la "<<y<<" es: "<<potencia;
	
	return 0;
}
