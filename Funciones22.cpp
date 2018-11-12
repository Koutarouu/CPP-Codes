/*22.Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva en la salida est�ndar los n�meros
del ini al fin. Escriba una versi�n que escriba los n�meros en orden ascendente.*/

#include<iostream>
using namespace std;
int escribeNumeros(int ini,int fin);

int main(){
	int inicio,final;
	cout<<"Digite el inicio y el final de la serie de numeros: ";cin>>inicio>>final;
	
	//Llamamos a la funcion de forma iterativa para mostrar todos los elementos
	for(int i=inicio;i<=final;i++){
		cout<<escribeNumeros(i,final)<<" ";
	}
	
	return 0;
}

int escribeNumeros(int ini,int fin){
	if(ini==fin){
		return ini;
	}else{
		return escribeNumeros(ini,fin-1);
	}
}
