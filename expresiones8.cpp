/*8:Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y 
escriba en la salida estándar su hipotenusa.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float ca,co,hy;
	
	cout<<"Valor del cateto adyacente: ";cin>>ca;
	cout<<"Valor del cateto opuesto: ";cin>>co;
	hy=pow(((ca*ca)+(co*co)),.5);
	cout<<"\nLa hypotenusa es: "<<hy;
	return 0;
}
