//Pedir al usuario que digite 2 cadenas e indicar si ambas son iguales en caso de que no indicar cual es
//mayor alfabeticamente

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30];
	char palabra2[30];
	
	cout<<"Digite dos palabras: ";
	cin.getline(palabra1,30,'\n');
	cin.getline(palabra2,30,'\n');
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"ambas cadenas son iguales";
	}else if(strcmp(palabra1,palabra2)>0){
		cout<<palabra2<<" es mayor alfabeticamente";
	}
	return 0;
}
