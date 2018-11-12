/*
6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos,
y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.
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
	float averagee;
}alumns[100];

int main(){
	float mayor=0;
	int i,n,posM=0;
	
	cout<<"Type the number of student's for participate:";
	cin>>n;
	
	for(i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Type your name: ";
		cin.getline(alumns[i].name,20,'\n');
		cout<<i+1<<". Type your sex: ";
		cin.getline(alumns[i].sex,10,'\n');
		cout<<i+1<<". Type your age: ";
		cin>>alumns[i].age;
		cout<<"\nStudent's notes: "<<endl;
		cout<<i+1<<". Note1: "; cin>>alumns[i].prom.note1;
		cout<<i+1<<". Note2: "; cin>>alumns[i].prom.note2;
		cout<<i+1<<". Note3: "; cin>>alumns[i].prom.note3;
		alumns[i].averagee=(alumns[i].prom.note1+alumns[i].prom.note2+alumns[i].prom.note1)/3;
		if(alumns[i].averagee>mayor){
			mayor=alumns[i].averagee;
			posM=i;
		}
	}
	
	cout<<"\nStudent data\n"<<endl;
	cout<<"The student's average is: "<<alumns[posM].averagee<<endl;
	cout<<"Name: "<<alumns[posM].name<<endl;
	cout<<"Sex: "<<alumns[posM].sex<<endl;
	cout<<"Age: "<<alumns[posM].age<<endl;
	
	return 0;
}
