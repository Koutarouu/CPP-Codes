/*12. Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa.
La estructura debe tener tres campos: horas, minutos y segundos.  Escriba un programa que dado 3 etapas
calcule el tiempo total empleado en correr todas las etapas. NOTA: Usar punteros.*/
#include<iostream>
using namespace std;
struct EmpleadoTime{
	int horas;
	int minutos;
	int segundos;
}etapas[3],*puntero_etapas=etapas;
void pedirDatos();
void sumarTime(EmpleadoTime *);

int main(){
	
	pedirDatos();
	sumarTime(puntero_etapas);
	cout<<endl;
	
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		cout<<"Digite las horas: ";
		cin>>(puntero_etapas+i)->horas;
		cout<<"Digite los minutos: ";
		cin>>(puntero_etapas+i)->minutos;
		cout<<"Digite los segundos: ";
		cin>>(puntero_etapas+i)->segundos;
	}
}

void sumarTime(EmpleadoTime *puntero_etapas){
	int horas=0,minutos=0,segundos=0;
	for(int i=0;i<3;i++){
		horas+=(puntero_etapas+i)->horas;
		minutos+=(puntero_etapas+i)->minutos;
		segundos+=(puntero_etapas+i)->segundos;
	}
	while(minutos>=60){
		horas++;
		minutos-=60;
	}
	while(segundos>=60){
		minutos++;
		segundos-=60;
	}
	cout<<"Tiempo total en recorrer las 3 etapas: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<minutos<<endl;
	cout<<"Segundos: "<<segundos<<endl;
}
