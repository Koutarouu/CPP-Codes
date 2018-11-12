/*
Ejercicio 8: Defina una estructura que sirva para representar a una persona. La estructura debe contener
dos campos: el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún
tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con
discapacidad.
*/

#include<iostream>
using namespace std;
struct Person{
	char name[20];
	int State;
	int id;
}persons[100];

int main(){
	int nice_state[100],poor_state[100];
	int i,n,sn=0,sb=0;
	
	cout<<"Type the number of person to clasificate: ";cin>>n;
	
	for(i=0;i<n;i++){
		fflush(stdin);
		cout<<i+1<<". Type your name: ";
		cin.getline(persons[i].name,20,'\n');
		cout<<"Condition: good(1) or bad(0): ";cin>>persons[i].State;
		persons[i].id=i;
		if(persons[i].State==1){
			nice_state[sn]=persons[i].id;
			sn++;
		}
		if(persons[i].State==0){
			poor_state[sb]=persons[i].id;
			sb++;
		}
		cout<<endl;
	}
	
	cout<<"\nPERSONS WITH DISABILITY: "<<"\n";
    for(i = 0; i<sb; i++){
    	cout<<persons[i].name<<endl;
    }cout<<"\nhealthy people: "<<"\n";
    for(i = 0; i<sn; i++){
        cout<<persons[i].name<<endl;
    }
	return 0;
}
