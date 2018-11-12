/*1.Realizar un programa que resuelva ecuaciones de segundo grado a traves de la formula general*/
#include<iostream>
#include<math.h>

using namespace std;
int main(){
	double a,b,c,x1=0,x2=0,determinant=0;
	
	cout<<"Digite los coeficientes de la ecuacion de segundo grado: ";
	cin>>a>>b>>c;
	determinant=sqrt((b*b)-4*(a)*(b));
	if(determinant>0){
		x1=(-(b)+determinant)/2*(a);
		x2=(-(b)-determinant)/2*(a);	
	}else if(determinant<0){
		cout<<"No tiene solucion (son imaginarias)"<<endl;
		return 1;
	}else{
		cout<<"Tiene una unica solucion";
	}
	
	cout<<x1<<"\n"<<x2<<endl;
	
	return 0;
}
