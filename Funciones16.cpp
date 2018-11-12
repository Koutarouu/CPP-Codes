/*16. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los
elementos almacenados en dicha fila.*/

#include<iostream>
using namespace std;

void pedirDatos();
void print_m(int menores[10],int);

int m[100][100],nfilas,ncol;
int menores[10];

int main(){
	
	pedirDatos();
	print_m(menores,nfilas);
	
	return 0;
}


void pedirDatos(){
	int menor=9999999;
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		menor=9999999;
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
			if(m[i][j]<menor){
				menor=m[i][j];
			}
		}
		menores[i]=menor;
	}
}

void print_m(int menores[10],int nfilas){
	for(int i=0;i<nfilas;i++){
		cout<<"Los valores menores de las filas respectivamente son: "<<menores[i]<<endl;
	}		
	
}



