//3. Escribe la siguiente expresion como expresion en C++ b) a+(b sobre c) sobre d+(e sobre f)

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f,res=0;
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b:";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	cout<<"Digite el valor de d:";cin>>d;
	cout<<"Digite el valor de e: ";cin>>e;
	cout<<"Digite el valor de f:";cin>>f;
	
	res=(a+(b/c))/(d+(e/f));
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<res;
	
	return 0;
}
