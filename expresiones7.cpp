/*7: La calificación final de un estudiante es la media ponderada de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de 
participación que cuenta el 10% restante. Escriba un programa que lea de la entrada 
estándar las tres notas de un alumno y escriba en la salida estándar su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	float practica, teorica, participacion,nota_final=0;
	
	cout<<"Digite la nota de practica: ";cin>>practica;
	cout<<"Digite la nota teorica: ";cin>>teorica;
	cout<<"Digite la nota de participacion: ";cin>>participacion;
	//modificados para calcular mi promedio en precalculo
	practica*=0.30;
	teorica*=0.30;
	participacion*=0.40;
	
	nota_final=practica+teorica+participacion;
	
	cout<<"\nLa nota final es: "<<nota_final;
	
	return 0;
}
