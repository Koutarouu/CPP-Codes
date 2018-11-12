//1. Escribe la siguiente expresion como expresion en C++

#include<iostream>

using namespace std;

int main(){
	float a,b,suma=0;
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b:";cin>>b;
	
	suma=a/b+1;
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<suma;
	
	return 0;
}
