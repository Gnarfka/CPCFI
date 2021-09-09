#include<iostream>

using namespace std;

int main(){
	string DNA;
	int cont = 1, i, aux;

	cin>> DNA;
	for(i=0; i<DNA.length(); i++){
		if(DNA[i]==DNA[i+1]){
			cont++;
		}
		if(DNA[i]!=DNA[i+1]){
			cont = 1;
		}
		if(cont>=aux){
				aux = con;
		}
	}

	cout << aux;
	return 0;
}
