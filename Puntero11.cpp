/*Hacer una estructura llamada alumno, en la cual se tendr�n los siguientes Campos: Nombre, edad,
promedio, pedir datos al usuario para 3 alumnos, comprobar cu�l de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura*/

#include<iostream>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno=alumno; //alumno[0]
void pedirDatos();
void calcularMejorPromedio(Alumno *);
int main(){
	
	pedirDatos();
	calcularMejorPromedio(puntero_alumno);
	cout<<endl;
	
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Digite su nombre: ";
		cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Digite su edad: ";
		cin>>(puntero_alumno+i)->edad;
		cout<<"Digite el promedio: ";
		cin>>(puntero_alumno+i)->promedio;
	}
}

void calcularMejorPromedio(Alumno *puntero_alumno){
	float mayor=0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){ //puntero_alumno[i].promedio
			mayor = (puntero_alumno+i)->promedio; //Comprobar el mayor promedio
			pos=i; //Guardando la posicion del amyor promedio
		}
	}
	//Imprimir los datos del alumno con mayor promedio
	cout<<"\nEl alumno con mejor promedio es: \n";
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}

