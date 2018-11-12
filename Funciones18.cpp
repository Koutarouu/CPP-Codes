/*18. Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de
fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(),
será devuelta la segunda fecha.*/
#include <math.h>
#include<iostream>
using namespace std;
struct fecha{
	int dia;
	int mes;
	int anio;
}primera,segunda;

void pedirData();
void mayor(fecha,fecha);

int main(){
	
	pedirData();
	mayor(primera,segunda);
	
	return 0;
}

void pedirData(){
	cout<<"Digite la primera fecha en este orden dia mes año: ";
	cin>>primera.dia>>primera.mes>>primera.anio;
	cout<<"Digite la segunda fecha en este orden dia mes año: ";
	cin>>segunda.dia>>segunda.mes>>segunda.anio;
}

void mayor(fecha p,fecha s){
	int diferencia1=0,diferencia2=0;
	diferencia1=fabs(2018-p.anio);
	diferencia2=fabs(2018-s.anio);
	if(diferencia1<diferencia2){
		cout<<"La primer fecha ingresada es la mas cercana al año actual.";
	}else if(diferencia2<diferencia1){
		cout<<"La segunda fecha ingresada es la mas cercana al año actual.";
	}else{
		cout<<"La diferencia en años es la misma.";
	}
	
}

/*
Fecha mayor(Fecha f1,Fecha f2){
	Fecha mayorFecha;
	
	//Primero comprobamos los años
	if(f1.anio == f2.anio){
		//Ahora, comprobamos los meses
		if(f1.mes ==f2.mes){
			//Por ultimo comprobamos los dias
			if(f1.dia == f2.dia){
				cout<<"\nAmbas fechas son iguales";
			}
			else if(f1.dia > f2.dia){
				mayorFecha = f1;
			}
			else{
				mayorFecha = f2;
			}
		}
		else if(f1.mes > f2.mes){
			mayorFecha = f1;
		}
		else{
			mayorFecha = f2;
		}
	}
	else if(f1.anio > f2.anio){
		mayorFecha = f1;
	}
	else{
		mayorFecha = f2;
	}
	
	
	return mayorFecha;
}

*/

