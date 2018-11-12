//2. Escribe la siguiente expresion como expresion en C++ b) a+b sobre c+d

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,division=0;
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b:";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	cout<<"Digite el valor de d:";cin>>d;
	
	division=(a+b)/(c+d);
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<division;
	
	return 0;
}
