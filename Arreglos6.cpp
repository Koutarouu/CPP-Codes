/*Escribe un programa que defina un vector de números y calcule si existe algún número en el vector
cuyo valor equivale a la suma del resto de números del vector*/

#include<iostream>

using namespace std;

int main(){
	int numeros[100],n,suma=0;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		suma+=numeros[i];
	}
	
	for(int i=0;i<n;i++){
		if(numeros[i]==(suma-numeros[i])){
			cout<<"El numero que equivale ala suma de los demas elementos del vector es: "<<numeros[i];
			return 1;
		}
	}
	cout<<"Ningun elemento del arreglo es la suma de los demas.";
	return 0;
}

/*
for(int i=0;i<5;i++){
		suma += numeros[i];
		
		if(numeros[i]>mayor){ //Determinamos cual es el numero mayor, ya que
			mayor = numeros[i];//el unico numero que puede ser la suma de los
		}					  //demas es el numero mayor
	}
	
	if(mayor == suma-mayor){//comparamos si el numero mayor es igual a suma menos el numero mayor
		cout<<"El numero "<<mayor<<" es la suma de los demas";
	}
	else{
		cout<<"No existe ningun numero que sea la suma de los demas";
	}
*/
