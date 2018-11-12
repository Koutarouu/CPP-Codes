/*4: Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
nombre, país, numero_medallas. y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor
número de medallas.*/

#include<iostream>
using namespace std;
struct Athletes{
	char name[20];
	char country[20];
	int n_medals;
}ath[100];


int main(){
	int n_athletes,i,posM=0,posm=0,mayor=0,menor=99999;
	
	cout<<"Enter the number of athletes: ";
	cin>>n_athletes;
	
	for(i=0;i<n_athletes;i++){
		fflush(stdin);
		
		cout<<i+1<<". Type your name: ";
		cin.getline(ath[i].name,20,'\n');
		cout<<i+1<<". Type your country: ";
		cin.getline(ath[i].country,20,'\n');
		cout<<i+1<<". Number of medals: ";
		cin>>ath[i].n_medals;
		
		if(ath[i].n_medals > mayor){
			mayor=ath[i].n_medals;
			posM=i;
		}
		if(ath[i].n_medals < menor){
			menor=ath[i].n_medals;
			posm=i;
		}
		cout<<"\n";
	}
	
	cout<<"\n.:The athlete with the highest number of medals is: "<<ath[posM].name<<endl;
	cout<<"Country: "<<ath[posM].country<<endl;
	cout<<"Medals: "<<ath[posM].n_medals<<endl;
	
	cout<<"\n.:The athlete with the lowest number of medals is: "<<ath[posm].name<<endl;
	cout<<"Country: "<<ath[posm].country<<endl;
	cout<<"Medals: "<<ath[posm].n_medals<<endl;
	
	return 0;
}
