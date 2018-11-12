/*Escribe un programa que lea de la entrada estándar el precio de un producto y 
muestre en la salida estándar el precio del producto al aplicarle el IVA.
*/

#include<iostream>

using namespace std;

int main(){
	float precio,iva=.05,newprecio;
	
	cout<<"Digite el precio del producto: ";cin>>precio;
	newprecio=precio+(precio*iva);
	cout<<"El producto cuesta "<<newprecio;
	
	return 0;
}
