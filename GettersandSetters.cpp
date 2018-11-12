//Metodos Constructores y Modificadores (Getters y Setters)

#include<iostream>
#include<stdlib.h>
using namespace std;

class Punto{
	private: //Atributos
		int x,y;
	public: //Metodos
		Punto(); //Constructor
		void setPunto(int,int);
		int getPuntoX();
		int getPuntoY();
};

Punto::Punto(){
}

//Establecemos valores a los atributos
void Punto::setPunto(int _x,int _y){
	x = _x;
	y = _y;
}

int Punto::getPuntoX(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}

int main(){
	Punto punto1;
	
	punto1.setPunto(15,10);
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	system("pause");
	return 0;
}
