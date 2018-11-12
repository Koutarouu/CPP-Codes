/*10. Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número
total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. La función
es calcular el año, mes y día actual para el número dado de días que se le transmitan. Usando las
referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que
llama. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

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
