//Estructuras Anidadas: Es una estructura dentro de otra.

#include<iostream>
using namespace std;

struct inf_address{
	char address[30];
	char city[20];
	char province[20];
};

struct employee{
	char name[20];
	struct inf_address dir_employee;
	double salary;
}employee[2];

int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		cout<<"Type your name: ";
		cin.getline(employee[i].name,20,'\n');
		cout<<"Type your address: ";
		cin.getline(employee[i].dir_employee.address,30,'\n');
		cout<<"City: ";
		cin.getline(employee[i].dir_employee.city,20,'\n');
		cout<<"Province: ";
		cin.getline(employee[i].dir_employee.province,20,'\n');
		cout<<"Type your salary: ";
		cin>>employee[i].salary;
		cout<<endl;
	}
	
	//Imprimiendo los datos
	
	for(int i=0;i<2;i++){
		cout<<"\nName: "<<employee[i].name<<endl;
		cout<<"Address: "<<employee[i].dir_employee.address<<endl;
		cout<<"City: "<<employee[i].dir_employee.city<<endl;
		cout<<"Province: "<<employee[i].dir_employee.province<<endl;
		cout<<"Salary: "<<employee[i].salary<<endl;
	}
	
	return 0;
}
