/*En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el n�mero de: 
 a) Alumnos que aprobaron todos los ex�menes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron �nicamente el �ltimo examen.
 
Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas.*/

#include<iostream>
using namespace std;
int main(){
	float ex1,ex2,ex3;
	int i,aprob_all=0,aprob_one=0,aprob_ult=0;
	const char* alumnos[]={"primer","segundo","tercer","cuarto","quinto"};
	
	for(i=0;i<5;i++){
		cout<<"Calificaciones del "<<alumnos[i]<<" alumno"<<endl;
		cout<<"Digite su calificacion del primer examen: ";cin>>ex1;
		cout<<"Digite su calificacion del segundo examen: ";cin>>ex2;
		cout<<"Digite su calificacion del tercer examen: ";cin>>ex3;
		if(ex1>=7&&ex2>=7&&ex3>=7){
			aprob_all++;
		}else if(ex1>=7 || ex2>=7 || ex3>=7){
			aprob_one++;
		}
		if(ex3>=7){
			aprob_ult++;
		}
	}
	
	cout<<"Alumnos que aprobaron todos los ex�menes."<<aprob_all<<endl;
	cout<<"Alumnos que aprobaron al menos un examen."<<aprob_one<<endl;
	cout<<"Alumnos que aprobaron �nicamente el �ltimo examen."<<aprob_ult<<endl;
	
	
	return 0;
}
