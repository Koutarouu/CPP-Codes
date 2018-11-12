#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="Diego";
	char palabra2[] = {'D','i','e','g','o'};
	char nombre[30];

	cout<<"Digite su nombre: ";
	cin.getline(nombre,20,'\n');
	
	cout<<nombre<<endl;

	return 0;
}
