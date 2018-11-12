/*9. Realice un programa que calcule el valor que toma la siguiente 
función para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float x,y,res=0;
	
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	res=(sqrt(x))/(pow(y,2)-1);
	cout<<"El resultado de su funcion es: "<<res<<endl;
	
	return 0;
}
