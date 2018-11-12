/*10.Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la 
forma ax^2 + bx + c = 0, teniendo en cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a) y 
(-b-sqrt(pow(b,2)-4*a*c))/(2*a)*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a,b,c,res1=0,res2=0;
	
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	
	res1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	res2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
	
	cout<<"El resultado 1 de su funcion es: "<<res1<<endl;
	cout<<"El resultado 2 de su funcion es: "<<res2<<endl;
	
	return 0;
}
