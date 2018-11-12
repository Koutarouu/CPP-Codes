/*
Ejercicio 5: Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2,nota3;
y otro llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura
promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular
su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
*/
#include<iostream>
#include<conio.h>
using namespace std;

struct Average{
	float note1;
	float note2;
	float note3;
};

struct Alumn{
	char name[20];
	char sex[10];
	int age;
	struct Average prom;
}alumn1;

int main(){
	float average=0;
	
	cout<<"Type your name: ";
	cin.getline(alumn1.name,20,'\n');
	cout<<"Type your sex: ";
	cin.getline(alumn1.sex,10,'\n');
	cout<<"Type your age: ";
	cin>>alumn1.age;
	
	cout<<"\nNOTES OF ALUMN: "<<endl;
	cout<<"Note1: "; cin>>alumn1.prom.note1;
	cout<<"Note2: "; cin>>alumn1.prom.note2;
	cout<<"Note3: "; cin>>alumn1.prom.note3;
	
	average= (alumn1.prom.note1+alumn1.prom.note2+alumn1.prom.note1)/3;
	
	cout<<"\nStudent data\n"<<endl;
	cout<<"The student's average is: "<<average<<endl;
	cout<<"Name: "<<alumn1.name<<endl;
	cout<<"Sex: "<<alumn1.sex<<endl;
	cout<<"Age: "<<alumn1.age<<endl;
	
	return 0;
}
