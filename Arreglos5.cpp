/*5.Desarrolle un programa que lea de la entrada estándar un
vector de enteros y determine el mayor elemento del vector. */


#include<iostream>

using namespace std;
int main(){
	int numeros[100],n,mayor;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	cout<<endl<<"El numero mas grande del vector es: "<<mayor;
	return 0;
}
