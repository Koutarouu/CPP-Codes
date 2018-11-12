/*8.Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de
referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente.
La función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir
el valor en el número menor de billetes equivalentes.*/
#include<iostream>
using namespace std;
void change(int n,int&,int&,int&,int&,int&,int&);
int main(){
	int n,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	
	cout<<"Digite una cantidad en dolares: ";cin>>n;
	
	change(n,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	return 0;
}

void change(int n,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	while(n>=100){cien++; n-=100;}
	while(n>=50){cincuenta++; n-=50;}
	while(n>=20){veinte++; n-=20;}
	while(n>=10){diez++; n-=10;}
	while(n>=5){cinco++; n-=5;}
	while(n!=0){uno++; n-=1;}
//	cien=n/100; n=n-(cien*100);
// 	cincuenta=n/50; n=n-(cincuenta*50);
// 	veinte=n/20; n-=(veinte*20);
// 	diez=n/10; n-=(diez*10);
// 	cinco=n/5; n-=(cinco*5);
// 	uno=n/1; n-=(uno*1);
}

