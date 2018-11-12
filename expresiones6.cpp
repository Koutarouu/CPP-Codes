/*6. Escriba un programna que lea la nota final de cuatro alumnos y calucle la nota final medi de los
4 alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	float c1,c2,c3,c4,media;
	cout<<"Digite las cuatro calificaciones: ";
	cin>>c1;cin>>c2;cin>>c3;cin>>c4;
	media=(c1+c2+c3+c4)/4;
	cout<<"La nota final media de los cuatro alumnos es: "<<media;
	
	return 0;
}
