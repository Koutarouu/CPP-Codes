/*POO 1.Construya una clase llamada Rectángulo que tenga los siguientes atributos: largo y ancho, y los
siguientes métodos: perimetro() y área().
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Rectangulo{
	private:
		float largo;
		float ancho;
	public:
		Rectangulo(float,float);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _largo,float _ancho){
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro(){
	cout<<"El perimetro del rectangulo es: "<<((largo*2)+(ancho*2))<<endl;
}

void Rectangulo::area(){
	cout<<"El area del rectangulo es: "<<(largo*ancho)/2<<endl;
}

int main(){
	Rectangulo r1(20,30);
	r1.area();
	r1.perimetro();
	system("pause");
	return 0;
}
