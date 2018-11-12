/*17. Suma de números complejos

			z1 = 5 - 3i		,  z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
		= 5-3i-4+2i
		= 1-i
*/

#include<iostream>
using namespace std;

struct Complex{
	float real,imaginary;
}z1,z2;

void pedirDatos();
Complex suma(Complex,Complex);
void muestra(Complex);

int main(){
	
	pedirDatos();
	Complex x = suma(z1,z2);
	muestra(x);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite los datos para el primer numero Complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z1.real;
	cout<<"Parte imaginaria: "; cin>>z1.imaginary;
	
	cout<<"\n\nDigite los datos para el segundo numero Complejo: "<<endl;
	cout<<"Parte Real: "; cin>>z2.real;
	cout<<"Parte imaginaria: "; cin>>z2.imaginary;
}

Complex suma(Complex z1, Complex z2){
	z1.real+=z2.real;
	z1.imaginary+=z2.imaginary;
	
	return z1;
}

void muestra(Complex x){
	cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginary<<endl;
}
