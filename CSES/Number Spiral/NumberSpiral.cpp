#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	long long int t, mayor, columnas, renglones, solucion=0, diagonal;
	cin >> t;
	for(int i = 0 ; i < t; i++){
		cin >> renglones >> columnas;
		mayor = max(columnas,renglones);
		
		diagonal = mayor*mayor;
		diagonal = diagonal - (mayor-1);

		if(mayor%2==0){
			if(mayor == columnas){
				solucion = diagonal - (mayor-renglones);
			}else{
				solucion = diagonal + (mayor - columnas);
			}
				
		}else{
			if(mayor == columnas){
				solucion = diagonal + (mayor-renglones);
			}else{
				solucion = diagonal - (mayor-columnas);
			}
		}
		cout << solucion <<"\n";
	}
	return 0;
}