//3.Hacer un programa con 3 clase Persona,Empleado,Estudiante,Universitario

///Herencia en POO

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

class Empleado : public Persona{
	private:
		string codigoEmpleado;
		float pago;
	public:
		Empleado(string,int,string,float);
		void mostrarEmpleado();
};

class Estudiante : public Persona{
	private:
		string noCuenta;
		float notaFinal;
	public:
		Estudiante(string,int,string,float);
		void mostrarEstudiante();
};


class Universitario : public Estudiante{
	private:
		string noCasillero;
	public:
		Universitario(string,int,string,float,string);
		void mostrarUniversitario();
};


Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

Estudiante::Estudiante(string _nombre, int _edad, string _noCuenta, float _notaFinal) : Persona(_nombre,_edad){
	noCuenta = _noCuenta;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

Universitario::Universitario(string _nombre, int _edad, string _noCuenta, float _notaFinal,string _noCasillero) : Estudiante(_nombre,_edad,_noCuenta,_notaFinal){
	noCasillero=_noCasillero;
}
	
void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<noCuenta<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}


void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"No de casillero: "<<noCasillero<<endl;
}

int main(){
	Universitario universitario1("Diego",18,"42151525",17.7,"dawdawf");
	universitario1.mostrarUniversitario();
	
	system("");
	return 0;
}
