//Crear un programa que tenga la siguiente jerarquia de clases y hacer polimorfismo con el método comer()

#include<iostream>
#include<stdlib.h>
using namespace std;

class Animal{
	private:
		string nombre;
		int edad;
	public:
		Animal(string,int);
		virtual void comer();
};

class Humano : public Animal{
	private:
		string comidafav;
	public:
		Humano(string,int,string);
		void comer();
};

class Perro : public Animal{
	private:
		string comidafav;
		string raza;
	public:
		Perro(string,int,string,string);
		void comer();
};

Animal::Animal(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Animal::comer(){
	cout<<"El animal con el nombre de: "<<nombre<<" esta comiendo:"<<endl;
}

Humano::Humano(string _nombre,int _edad,string _comidafav) : Animal(_nombre,_edad){
	comidafav = _comidafav;
}

void Humano::comer(){
	Animal::comer();
	cout<<"Su comida favorita la cual es: "<<comidafav<<" y come con cubiertos."<<endl;
}

Perro::Perro(string _nombre,int _edad,string _comidafav,string _raza) : Animal(_nombre,_edad){
	comidafav = _comidafav;
	raza = _raza;
}

void Perro::comer(){
	Animal::comer();
	cout<<"Su comida favorita la cual es: "<<comidafav<<" y como es un perro come en el piso."<<endl;
	cout<<"Y su raza es "<<raza<<endl;
}

int main(){
	Animal *vector[3];
	
	vector[0] = new Humano("Diego",18,"vegetales");
	vector[1] = new Humano("Perro",33,"noc");
	vector[2] = new Perro("Perroperro",5,"zanahorias","Dalmata");
	
	vector[0]->comer();
	cout<<endl;
	vector[1]->comer();
	cout<<endl;
	vector[2]->comer();
	
	system("pause");
	return 0;
}
