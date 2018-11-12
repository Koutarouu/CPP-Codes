/*6. Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos
que se transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo
tipo de datos.*/

#include<iostream>
using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD n1);
float mayor;
int main(){
	float n[3];
	cout<<"Digite sus tres numeros: ";
	cin>>n[0]>>n[1]>>n[2];
	
	maximo(n);
	
	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD n){
	for(int i=0;i<3;i++){
		if(n[i]>mayor)
			mayor=n[i];
	}
	cout<<mayor;
}
/*
if(n1>n2 && n1>n3){
		return n1;
	}else if(n2>n1 && n2>3){
		return n2;
	}else{
		return n3;
	}
*/
