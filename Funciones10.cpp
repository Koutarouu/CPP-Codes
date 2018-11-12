/*10. Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el n�mero
total de d�as desde la fecha 1/1/2000 y par�metros de referencia nombrados a�o, mes y d�a. La funci�n
es calcular el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan. Usando las
referencias, la funci�n deber� alterar en forma directa los argumentos respectivos en la funci�n que
llama. Para este problema suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.*/

#include<iostream>
using namespace std;

void calc_anios(int,int&,int&,int&);

int main(){
	int dias,anio,mes,dia;
	cout<<"Digite el numero total de dias: ";
	cin>>dias;
	
	calc_anios(dias,anio,mes,dia);
	
	cout<<"\nUsted se encuentra en el anio: "<<2000+anio<<endl;
	cout<<"En el Mes: "<<mes<<endl;
	cout<<"Y en el Dia: "<<dia<<endl;
	
	return 0;
}

void calc_anios(int dias,int& anio,int& mes,int& dia){
	anio=dias/360;
	dias%=360;
	mes=dias/30;
	dia=dias%30;
	
	mes+=1;
	dia+=1;
}
