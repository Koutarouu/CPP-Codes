/*La sentencia while:
	while(expresion logica){
		conjunto de instrucciones;
	}
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int i;
	
	i=100;
	while(i>=1){
		cout<<i<<endl;
		i--;
	}
	
	getch();
	return 0;
}
