/*20. Realice una función recursiva para la serie Fibonacci*/


#include<iostream>
using namespace std;

int serie(int);

int main(){
	int n;
	do{
		cin>>n;
	}while(n<=0);
	
	//Mandamos llamar a la funcion pero de forma iterativa para imprimir todos los elementos
	cout<<"Serie Fibonacci: ";
	for(int i=1;i<=n;i++){
		cout<<serie(i)<<" ,";
	}
	
	
	return 0;
}

int serie(int n){
	if(n<=1){
		return 1;
	}else{
		return (serie(n-1)+serie(n-2));
	}
}
