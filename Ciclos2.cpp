/*2. Realice un programa que lea de la entrada est�ndar n�meros hasta que se introduzca un cero. 
En ese momento el programa debe terminar y mostrar en la salida est�ndar 
el n�mero de valores mayores que cero le�dos.*/

#include<iostream>

using namespace std;

int main(){
	int numero,contador;
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
		if(numero>0)
			contador+=1;
	}while(numero!=0);
	
	cout<<"El numero de valores mayores que cero leidos es: "<<contador<<endl;
	
	cout<<"\n\n";
	system("pause");
	
	return 0;
}
