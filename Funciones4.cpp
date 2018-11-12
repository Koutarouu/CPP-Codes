/*4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por
el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879 */
#include<iostream>

using namespace std;
void fraccionaria(float n);
void fraccionaria2(float n);

int ni;
int main(){
	float n;
	
	cout<<"Digite el numero del cual quiere sacar su parte fraccionaria: ";
	cin>>n;
	
	fraccionaria(n);
	fraccionaria2(n);
	
	return 0;
}

void fraccionaria(float n){	
	float partef=0,decimal=0;
	ni=n;
	partef=n-ni;
	decimal = (n * 100) - (ni * 100);
	cout<<"1. La parte fraccionaria es: "<<partef<<endl;
	cout<<"2. La parte fraccionaria en entero es: "<<decimal<<endl;
}

void fraccionaria2(float x){
	while(x>=1)
		x-=1;
	cout<<x;
}
