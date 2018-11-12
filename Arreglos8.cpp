/*8. Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 
y muestre el segundo arreglo.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros1[]={1,2,3,4,5};
	int numeros2[5];
	int i;
	
	for(i=0;i<5;i++){
		numeros2[i]=numeros1[i]*2;
	}
	
	for(i=0;i<5;i++){
		cout<<numeros2[i]<<endl;
	}
	
	getch();
	return 0;
}
