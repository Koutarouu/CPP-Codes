/*4. Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include<iostream>

using namespace std;

int main(){
	float tmedia=0;
	int temperaturas[6],i;
	const char* temp[] = {"primer","segunda","tercera","cuarta","quinta","sexta"};
	for(i=0;i<6;i++){
		cout<<"Digite la "<<temp[i]<<" del dia en grados: ";cin>>temperaturas[i];
		tmedia+=temperaturas[i];
	}
	cout<<"La suma de las temperaturas es: "<<tmedia<<endl;
	tmedia/=6;
	cout<<"La media de las temperaturas es: "<<tmedia;
	
	return 0;
}
