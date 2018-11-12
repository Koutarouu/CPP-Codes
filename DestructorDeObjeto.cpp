//Destructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class Perro{
	private:
		string nombre,raza;
	public:
		Perro(string,string); //Constructor
		~Perro(); //Destructor
		void mostrarDatos();
		void jugar();
};

//Constructor
Perro::Perro(string _nombre,string _raza){
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro(){
}

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}
int main(){
	Perro perro1("Pufi","Dalmata");
	
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro(); //Destruyendo el objeto no hace falta por que el programa borra todo cuando se acaba el programa pero ya sabemos como hacerlo
	
	system("pause");
	return 0;
}
