//Punteros a Estructuras

#include<iostream>
using namespace std;

struct Person{
	char name[30];
	int age;
}persona, *dir_persona=&persona;

void pedirDatos();
void mostrarDatos(Person *);
int main(){
	pedirDatos();
	mostrarDatos(dir_persona);
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(dir_persona->name,30,'\n');
	cout<<"Digite su edad: ";
	cin>>dir_persona->age;
}

void mostrarDatos(Person *dir_persona){
	cout<<"\nSu nombre es: "<<dir_persona->name<<endl;
	cout<<"Su edad es: "<<dir_persona->age<<endl;
}
