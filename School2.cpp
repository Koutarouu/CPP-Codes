/*2. En un videoclub se ofrece la promoción de llevarse tres películas por el precio de las dos más
baratas. Haga un programa que, dados los tres precios de las películas, determine la cantidad a pagar. */

#include<iostream>
using namespace std;
int main(){
	float p1,p2,p3;
	cout<<"Digite los precios de las 3 peliculas: ";
	cin>>p1>>p2>>p3;
	
	if(p1<p2 && p2<p3){
		cout<<"El total a pagar es de: "<<(p1+p2)<<endl;
	}else if(p1<p2 && p3<p2){
		cout<<"El total a pagar es de: "<<(p1+p3)<<endl;
	}else if(p2<p1 && p3<p2){
		cout<<"El total a pagar es de: "<<(p2+p3)<<endl;
	}else{
		cout<<"Ya pagas por todas ahora por **** "<<(p1+p2+p3);
	}
	
	return 0;
}
