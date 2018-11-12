/*Recursividad

Factorial de un número 3!=3*2*1

	factorial(n)=1					, si n=0
				n*factorial(n-1)	, si n>0
*/

#include<iostream>
using namespace std;

int factorial(int);

int main(){
	int n_fact;
	cin>>n_fact;
	cout<<factorial(n_fact)<<endl;
	
	return 0;
}

int factorial(int n){
	if(n==0)
		n=1;
	else
		n*=factorial(n-1);
	return n;
}
