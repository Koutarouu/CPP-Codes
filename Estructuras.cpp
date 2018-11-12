/*Estructuras: Es una coleccion de uno a mas tipos de elementos denominados campos, cada uno de los
cuales pueden ser un tipo diferente. */

#include<iostream>
using namespace std;

struct Person{
	char name[20];
	int age;
}person1,person2 = {"Ruperto",15};

int main(){
	cout<<"Name1? ";
	cin.getline(person1.name,20,'\n');
	cout<<"Age1? ";
	cin>>person1.age;
	
	cout<<"\nImprimiendo datos \n";
	cout<<"Name1: "<<person1.name<<endl;
	cout<<"Age1: "<<person1.age<<endl<<endl;
	
	cout<<"Name2: "<<person2.name<<endl;
	cout<<"Age2: "<<person2.age<<endl;
	
	return 0;
}
