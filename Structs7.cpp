/*
Ejercicio 7: Defina una estructura que indique el tiempo empleado por un ciclista en una etapa.
La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Stage{
	int hours;
	int minutes;
	int seconds;
}st[100];

int main(){
	int n_stages,hoursT=0,minutesT=0,secondsT=0;
	
	cout<<"Digit the number of stages: ";cin>>n_stages;
	
	for(int i=0;i<n_stages;i++){
		cout<<"Hours: ";cin>>st[i].hours;
		cout<<"Minutes: ";cin>>st[i].minutes;
		cout<<"Seconds: ";cin>>st[i].seconds;
		
		hoursT+=st[i].hours;
		minutesT+=st[i].minutes;
		if(minutesT>=60){
			minutesT -= 60;
			hoursT++;
		}
		secondsT+=st[i].seconds;
		if(secondsT>=60){
			secondsT -= 60;
			minutesT++;
		}
		cout<<"\n";
	}
	cout<<"\nTotal time spent\n";
	cout<<"Hours: "<<hoursT<<endl;
	cout<<"Minutes: "<<minutesT<<endl;
	cout<<"Seconds: "<<secondsT<<endl;
	
	getch();
	return 0;
}
