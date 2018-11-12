//Paso de parametros de tipo estructura

#include<iostream>
using namespace std;

struct Person{
	char name[35];
	int age;
}p1;

//Prototipos
void pedirDatos();
void showData(Person);

int main(){
	pedirDatos();
	showData(p1); //Le paso una variable de tipo estructura
	
	return 0;
}

void pedirDatos(){
	cout<<"Type your name: ";
	cin.getline(p1.name,35,'\n');
	cout<<"Type your age: ";
	cin>>p1.age;
}

void showData(Person p){
	cout<<"\n\nName: "<<p.name<<endl;
	cout<<"Age: "<<p.age<<endl;
}
