/*4.Escribe un programa que defina un vector de n�meros 
y muestre en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento.*/

#include<iostream>
using namespace std;
int main(){
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i]; // Guardando todos los elementos del vector
	}
	
	//Ahora, vamos a mostrar los elementos con sus indices asociados
	
	for(int i=4;i>=0;i--){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	return 0;
}
