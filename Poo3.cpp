/*Construya una clase Tiempo que contenga los siguientes atributos enteros: horas,minutos y segundos.
Haga que la clase contenga 2 constructores, el primero debe tener 3 parámetros Tiempo(int,int,int) y el
segundo sólo tendrá un campo que serán los segundos y desensamble el número entero largo en horas,
minutos y segundos. */
#include<iostream>
#include<stdlib.h>
using namespace std;

class Tiempo{
	private:
		int horas,minutos,segundos;
	public:
		Tiempo(int,int,int);
		Tiempo(int);
		void mostrarTiempo();
};

Tiempo::Tiempo(int _horas,int _minutos,int _segundos){
	horas=_horas;
	minutos=_minutos;
	segundos=_segundos;
}

Tiempo::Tiempo(int time){
	horas=time/3600;
	time%=3600;
	minutos=time/60;
	time%=60;
	segundos=time; //time%60
	/*
	horas=int(num/3600);
	minutos=int((num-horas*3600)/60);
	segundos=num-(horas*3600+minutos*60);
	*/
}

void Tiempo::mostrarTiempo(){
	cout<<"El tiempo que ingresaste es: "<<horas<<" horas con: "<<minutos<<" minutos con: "<<segundos<<" segundos."<<endl;
}

int main(){
	Tiempo t1(7,8,10);
	t1.mostrarTiempo();
	
	Tiempo t2(55410);
	t2.mostrarTiempo();
	
	return 0;
}
