//Pedir su nombre al usuario en MAYUSCULA,si su nombre comienza por la letra A, convertir su nombre a
//minusculas, caso contrario no convertirlo.

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char nombre_M[30];
	cout<<"Digite su nombre en Mayusculas: ";cin.getline(nombre_M,30,'\n');
	
	if(nombre_M[0]=='A')
		cout<<strlwr(nombre_M)<<endl;
	else
		cout<<nombre_M;
		
	return 0;
}
