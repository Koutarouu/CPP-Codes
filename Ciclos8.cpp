/*8. Escriba un programa que calucle el valor de: 1+3+5+...+2n-1*/
#include<iostream>

using namespace std;

int main(){
	int i,n,suma=0;
	cout<<"Hasta que numero quiere su suma: ";cin>>n;
	
	for(i=1;i<=(2*n-1);i+=2){
		suma+=i;
	}
	
	cout<<"La suma de sus numeros es: "<<suma;
	return 0;
}
