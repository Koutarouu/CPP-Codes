/*2: Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y
despliegue el resultado. La funci�n deber� ser capaz de elevar al cuadrado n�meros flotantes. */

#include<iostream>
using namespace std;
float al_cuadrado(float n);
int main(){
	float n;
	
	cout<<"Digite un numero para elevarlo al cuadrado: ";
	cin>>n;
	
	al_cuadrado(n);
	
	return 0;
}

float al_cuadrado(float n){
	cout<<(n*n);
}
