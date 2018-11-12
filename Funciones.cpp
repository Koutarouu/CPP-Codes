//Funcion

#include<iostream>

using namespace std;
//Prototipo de Funcion
int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	cout<<"Type 2 numbers: ";
	cin>>n1>>n2;
	
	cout<<"The highest number is: "<<encontrarMax(n1,n2);
	
	return 0;
}

//Definicion de Funcion
int encontrarMax(int x, int y){
	int numMax;
	
	if(x>y){
		numMax = x;
	}else{
		numMax = y;
	}
	return numMax;
}
