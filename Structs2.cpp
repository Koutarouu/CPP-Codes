/*Ejercicio 2: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor
promedio y posteriormente imprimir los datos del alumno.
*/

#include<iostream>
using namespace std;
struct Alumn{
	char name[20];
	int age;
	int average;
}alumns[3];

int main(){
	int i;
	for(i=0;i<3;i++){
		fflush(stdin);
		cout<<"Type your name: ";
		cin.getline(alumns[i].name,20,'\n');
		cout<<"Type your age: ";
		cin>>alumns[i].age;
		cout<<"Average: ";
		cin>>alumns[i].average;
		cout<<endl;
	}
	
	if(alumns[0].average > alumns[1].average && alumns[0].average > alumns[2].average){
		cout<<"The student with the best average is: "<<alumns[0].name<<endl;
		cout<<"Age: "<<alumns[0].age<<endl;
		cout<<"Average: "<<alumns[0].average<<endl;
	}else if(alumns[1].average > alumns[0].average && alumns[1].average > alumns[2].average){
		cout<<"The student with the best average is: "<<alumns[1].name<<endl;
		cout<<"Age: "<<alumns[1].age<<endl;
		cout<<"Average: "<<alumns[1].average<<endl;
	}else{
		cout<<"The student with the best average is: "<<alumns[2].name<<endl;
		cout<<"Age: "<<alumns[2].age<<endl;
		cout<<"Average: "<<alumns[2].average<<endl;
	}
	
	
	return 0;
}
