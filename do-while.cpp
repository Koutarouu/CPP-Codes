/*do while
	do{
		conjunto de instrucciones;
	}while(expresion lógica);
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--; //aumenta el iterador de uno en uno
	}while(i>=1);
	
	system("pause");
	return 0;
}
