///Herencia en POO

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string,int); //Constructor
		void mostrarPersona();
};

class Alumno : public Persona{
	private: //Atributos
		string noCuenta;
		float notaFinal;
	public: //Metodos
		Alumno(string,int,string,float); //Constructor de la clase Alumno
		void mostrarAlumno();
};

//Constructor de la clase Persona(SuperClass)
Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _noCuenta, float _notaFinal) : Persona(_nombre,_edad){
	noCuenta = _noCuenta;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<noCuenta<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}

int main(){
	Alumno alumno1("Diego",18,"42151525",17.7);
	alumno1.mostrarAlumno();
	
	system("");
	return 0;
}
