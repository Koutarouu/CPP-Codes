/*20.Escriba una funci�n recursiva que calcule un n�mero elevado a una potencia entera mayor o igual que
cero: x^y. }*/

#include<iostream>
using namespace std;
int elevacion(int,int);

int main(){
	int x,y;
	cout<<"Digite el valor y la potencia: ";cin>>x>>y;
	
	cout<<elevacion(x,y)<<endl;
	
	return 0;
}

int elevacion(int x,int y){
	if(y==1){//caso base
		return x;
	}else{//caso general
		return x*=elevacion(x,y-1);
	}
}

