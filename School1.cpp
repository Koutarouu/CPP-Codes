/*1.Escribir un programa que, dado un número real cualquiera, encuentre su valor absoluto.
El valor absoluto de un número x es igual a x si x > 0, y a -x si x es menor o igual a 0.
Por ejemplo, el valor absoluto de 0.5 es 0.5, mientras que el valor absoluto de 3 es 3. */
#include<iostream>
using namespace std;
int main(){
	float n;
	
	cout<<"Ingrese un numero para calcular su valor absoluto: ";
	cin>>n;
	
	if(n>=0){
		cout<<"El valor absoluto de "<<n<<" es: "<<n;
	}else if(n<0){
		cout<<"El valor absoluto de "<<n<<" es: "<<-(n);
	}
	
	
	return 0;
}
