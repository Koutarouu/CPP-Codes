/*Ejercicio 3: Realice un programa en C++, de tal manera que se construya una solución para la jerarquía
(herencia) de clases mostrada en la siguiente figura Persona,Empleado,Estudiante,Universitario*/

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
		string carrera;
	public:
		Universitario(string,int,string,float,string);
		void mostrarUniversitario();
};


Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

Empleado::Empleado(string _nombre, int _edad, string _codigoEmpleado, float _pago) : Persona(_nombre,_edad){
	codigoEmpleado = _codigoEmpleado;
	pago = _pago;
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Codigo Empleado: "<<codigoEmpleado<<endl;
	cout<<"Paga: "<<pago<<endl;
}

Estudiante::Estudiante(string _nombre, int _edad, string _noCuenta, float _notaFinal) : Persona(_nombre,_edad){
	noCuenta = _noCuenta;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

Universitario::Universitario(string _nombre, int _edad, string _noCuenta, float _notaFinal,string _carrera) : Estudiante(_nombre,_edad,_noCuenta,_notaFinal){
	carrera=_carrera;
}
	
void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<noCuenta<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}


void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"Carrera: "<<carrera<<endl;
}

int main(){
	Empleado empleado1("Noc",31,"41441",120000);
	empleado1.mostrarEmpleado();
	cout<<endl;
	Universitario universitario1("Diego",18,"42151525",17.7,"LCC");
	universitario1.mostrarUniversitario();
	
	system("");
	return 0;
}
