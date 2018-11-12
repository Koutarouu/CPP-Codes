/*15. Desarrollar una función que determine si una matriz es simétrica o no.

Una matriz es simetrica: A=A^t

- La matriz debe ser cuadrada. _
- Aij = Aji

|2 5 9|			|2 5 9|
|5 8 -1|	->	|5 8 -1|
|9 -1 10|		|9 -1 10|

*/
#include<iostream>

using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100],int,int);

int m[100][100],nfilas,ncol;

int main(){
	
	pedirDatos();
	comprobarSimetria(m,nfilas,ncol);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void comprobarSimetria(int m[][100],int nfilas,int ncol){
	int cont=0;
	if(nfilas == ncol){
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j] == m[j][i]){ //para verificar si al intercalar las filas con las columnas sigue siendo igual
					cont++;
				}
			}
		}
	}
	
	if(cont == nfilas*ncol)
		cout<<"La matriz es Simetrica";
	else
		cout<<"La matriz NO es Simetrica";
}
