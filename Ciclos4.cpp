/*4. Escriba un programa que tome cada 4 horas la temperatura exterior,
ley�ndola durante un per�odo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del d�a, la temperatura m�s alta y la m�s baja.*/

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
