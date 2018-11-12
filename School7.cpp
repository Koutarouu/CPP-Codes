/*3.Programa que solicite al usuario 3 precios y realice su total y de acuerdo a lo anterior realizar 
lo siguiente*/

#include<iostream>
using namespace std;

int main(){
	float p1,p2,p3,total=0;
	
	do{
		cout<<"Digite los 3 precios: "<<endl;cin>>p1>>p2>>p3;
	}while(p1<0||p2<0||p3<0);
	total=p1+p2+p3;
	//cout<<total<<endl;
	if(total >= 10001 && total <=40000){
		total*=.75;	
	}else if(total > 40000){
		total*=.70;
	}
	cout<<"El total a pagar ya con el descuento aplicado es: "<<total<<endl;
	
	
	
	return 0;
}
