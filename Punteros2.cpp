/* Determinar si un número es primo o no; con puteros y además indicar en que posición de memoria se
guardo el número.*/

#include<iostream>
using namespace std;

int main(){
	int n,*dir_n,cont=0;
	cout<<"Digite un numero: ";cin>>n;
	dir_n=&n;
	
	for(int i=2;i<=*dir_n;i++){
		if(*dir_n%i==0)
			cont++;
	}
	
	if(cont>2){
		cout<<"No es primo el numero: "<<*dir_n<<endl;
		cout<<"Su direccion en memoria es: "<<dir_n;
	}else{
		cout<<"Es primo el numero: "<<*dir_n<<endl;
		cout<<"Su direccion en memoria es: "<<dir_n;
	}
	
	return 0;
}
