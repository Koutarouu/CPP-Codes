//Sobrecarga de Constructores

#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
	private: //Attrs
		int dia,mes,anio;
	public: //Metodos
		Fecha(int,int,int); //Constructor1
		Fecha(long); //Constructor2
		void mostrarFecha();
};

// dia/mes/anio	  ---  20170109

Fecha::Fecha(int _dia,int _mes,int _anio){
	anio=_anio;
	mes = _mes;
	dia = _dia;
}

//Constructor2
Fecha::Fecha(long fecha){
	anio = int(fecha/10000); //Extraer el anio 2017
	mes = int((fecha-anio*10000)/100); //Extraemos el mes 01
	dia = int(fecha-anio*10000-mes*100); //Extraemos el dia
}

void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	Fecha hoy(10,11,2018);
	Fecha ayer(20180911);
	hoy.mostrarFecha();
	ayer.mostrarFecha();
	system("pause");
	return 0;
}
