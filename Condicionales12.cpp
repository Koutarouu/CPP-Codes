/*12. Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir.
  */

#include<iostream>

using namespace std;

int main(){
	int n,opc;
	
	cout<<"\tBienvenido a MathD"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: ";cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"Digite el numero que quiere elevar al cubo:  ";
			cin>>n;
			cout<<"El cubo del numero "<<n<<" es "<<(n*n*n);
			break;
		case 2:
			cout<<"Digite el numero para verificar si es par o impar: ";
			cin>>n;
			if(n%2==0){
				cout<<"Es numero par";
			}else{
				cout<<"Es un numero impar";
			}
		case 3: break;
	}	
	
	return 0;
}
