/*7.Intercambiar el valor de 2 variables utilizando paso de parametros por referencia. */

#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
	int num1=7,num2=20;
	
	cout<<"El valor de num1 es: "<<num1<<endl;
	cout<<"El valor de num2 es: "<<num2<<endl;
	
	swap(num1,num2);
	
	cout<<"\nEl valor de num1 es: "<<num1<<endl;
	cout<<"El valor de num2 es: "<<num2<<endl;
	
	return 0;
}

void swap(int& num1,int& num2){
	int aux;
	
	aux=num1;
	num1=num2;
	num2=aux;
	
}
