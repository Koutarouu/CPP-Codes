/*3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y
que imprima los datos del empleado con mayor y menor salario. */

#include<iostream>
using namespace std;
struct Employee{
	char name[20];
	float salary;
}emp[100];

int main(){
	int n_employee,i,posM=0,posm=0;
	float mayor=0,menor=999999;
	
	cout<<"Enter the number of employees: ";
	cin>>n_employee;
	
	for(i=0;i<n_employee;i++){
		fflush(stdin);
		cout<<i+1<<". Type your name: ";
		cin.getline(emp[i].name,20,'\n');
		cout<<i+1<<". Type your salary: ";
		cin>>emp[i].salary;
		
		//200 - 250 - 100
		
		//Empleado de mayor salario
		if(emp[i].salary > mayor){
			mayor = emp[i].salary;
			posM = i;
		}
		//Empleado de menor salario
		if(emp[i].salary < menor){
			menor = emp[i].salary;
			posm=i;
		}
		cout<<"\n";
	}
	
	cout<<"\n.:Data of the employee with the highest salary:.\n";
	cout<<"Name: "<<emp[posM].name<<endl;
	cout<<"Salary: "<<emp[posM].salary<<endl;
	
	cout<<"\n.:Data of the employee with the lowest salary:.\n";
	cout<<"Name: "<<emp[posm].name<<endl;
	cout<<"Salary: "<<emp[posm].salary<<endl;
	
	return 0;
}
