/*POO
Clase: es simplemente una abstraccion que hacemos de nuestra experiencia sensible.
Objeto : Conjunto de atrrubtos y mètodos un objeto se deriva de una clase
Abstraccion es un proceso mental de extraccion de las caracteristicas esenciales de algo, ignorando los
detalles superfluos (DNI,NOMBRE,EDAD,TALLA,PESO) solo lo importante.
Encapsulación
Proceso por el que se ocultan los detalles del soporte de las caracteristicas de una abstracción.
Herencia: Es donde una clase nueva se crea partir de una clase existente,heredando todos sus atributos
y métodos. Mamifero() ·singular - años,etc y methods cazar comer dormir etc. Leon(hereda de mamifero)
Polimorfismo: es aquella cualidad que poseen los objetos para responder de distinto modo ante el mismo
mensaje.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Person{
	private: //Atributos
		int age;
		string name;
	public: //Metodos
		Person(int,string); //Constructor
		void read();
		void run();
};
//Constructor, nos sirve para inicializar los atributos de la clase
Person::Person(int _age,string _name){
	age = _age;
	name = _name;
}

void Person::read(){
	cout<<"Soy "<<name<<" y estoy leyendo un libro xd"<<endl;
}

void Person::run(){
	cout<<"Soy "<<name<<" y estoy corriendo un maraton y tengo "<<age<<" anios."<<endl;
}

int main(){
	Person p1=Person(18,"Diego Francisco");
	Person p2(19,"Ramiro");
	Person p3(29,"Jaun");
	
	p1.read();
	
	p2.run();
	
	p3.read();
	p3.run();
	
	system("pause");
	return 0;
}
