//Verificar si es una palindroma o capicua

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cad[30],rev[30];
	cout<<"Digite una palabra para verificar si es capicua o no: ";
	cin.getline(cad,30,'\n');
	strcpy(rev,cad);
    strrev(rev);
	if(strcmp(cad,rev)==0)
		cout<<"La palabra es capicua o polindroma";		
	else
		cout<<"La palabra no es palindroma";
	
	return 0;
}
