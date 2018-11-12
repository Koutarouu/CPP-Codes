/*Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendr�n los siguientes campos:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categor�a de competici�n:
- Juvenil menor o = 18 a�os
- Se�or menor o = 40 a�os
- Veterano mayor a 40 a�os
Posteriormente imprimir todos los datos del corredor, incluida su categor�a de competici�n.
*/

#include<iostream>
#include<string.h>

using namespace std;

struct Runner{
	char name[20];
	int age;
	char sex[10];
	char club[20];
}c1;

int main(){
	char category[20];
	
	cout<<"Name: ";
	cin.getline(c1.name,20,'\n');
	cout<<"Age: ";
	cin>>c1.age;
	fflush(stdin);
	cout<<"Sex: ";
	cin.getline(c1.sex,10,'\n');
	cout<<"Club: ";
	cin.getline(c1.club,20,'\n');
	
	if(c1.age <= 18){
		strcpy(category,"Youths");
	}else if(c1.age <= 40){
		strcpy(category,"Mr");
	}else{
		strcpy(category,"Veteran");
	}
	
	cout<<endl<<endl<<"Runner data: "<<endl;
	cout<<"Name: "<<c1.name<<endl;
	cout<<"Age: "<<c1.age<<endl;
	cout<<"Sex: "<<c1.sex<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Category: "<<category<<endl;
	
	return 0;
}
