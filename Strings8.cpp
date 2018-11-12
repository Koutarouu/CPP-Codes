/*8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus 
respectivos valores y por ultimo sumarlos. */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char num1[10],num2[10];
	float num_2;
	int num_1;
	
	cout<<"Digite dos cadenas de caracteres con formato de entero y real: ";
	cin.getline(num1,10,'\n');
	cin.getline(num2,10,'\n');
	
	cout<<atoi(num1)+atof(num2)<<endl;
	
	return 0;
}
