/*12. Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int numero,suma=0;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=numero;i++){
		if(i%2==0){
			suma-=i;
		}else{
			suma+=i;
		}
	}
	
	cout<<"La suma total es: "<<suma;
	
	return 0;
}
