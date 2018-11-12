/*3. Escriba un programa que reciba cuatro calificaciones de un estudiante y devuelva el promedio
y la máxima y la mínima calificación. */

#include<iostream>

using namespace std;

int main(){
	float calificaciones[4],mayor=0,promedio=0;
	for(int i=0;i<4;i++){
		cout<<"Digite su calificacion no. "<<i+1<<": ";
		cin>>calificaciones[i];
		if(calificaciones[i]>mayor){
			mayor=calificaciones[i];
		}
		promedio+=calificaciones[i];
	}
	promedio/=4;
	cout<<"Su promedio es de: "<<promedio<<endl;
	cout<<"Su calificacion maxima fue de: "<<mayor<<endl;
	
	return 0;
}
