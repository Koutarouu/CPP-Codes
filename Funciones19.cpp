/*19.Realice una función recursiva que sume los primeros n enteros positivos.
Nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante la
siguiente recurrencia: 
	suma(n) = 1			, si n=1
			n+suma(n-1)	, si n>1
*/

#include<iostream>
using namespace std;

int suma(int);

int main(){
	int n;
	do{
		cin>>n;
	}while(n<=0);
	cout<<"La suma de los primeros "<<n<<" numeros es: "<<suma(n)<<endl;
	
	return 0;
}

int suma(int n){
	if(n==1)
		n=1;
	else if(n>1)
		n+=suma(n-1);
	return n;
}
