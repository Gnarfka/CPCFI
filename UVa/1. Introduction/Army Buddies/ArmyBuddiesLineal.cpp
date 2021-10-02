#include <iostream>

using namespace std;

int main(){
	int S, B, L, R;
	
	cin >> S >> B;

	while(S || B){
		int atLeft[S+1], atRight[S+1];

		for(int i = 1; i <= S; i++){
			atLeft[i] = i - 1;
			atRight[i] = i + 1;
		}

		while(B--){
			cin >> L >> R;
			atLeft[1] = -1; // Indicador de que no hay compañeros vivos a la izquierda
			atRight[S] = -1; // Indicador de que no hay compañeros vivos a la derecha

			// Modificamos el ultimo valor vivo a la izquierda del ultimo vivo a la derecha
			atLeft[atRight[R]] = atLeft[L];
			if(atLeft[L] > 0){
				cout << atLeft[L] << " ";
			}
			else{
				cout << "* ";
			}

			// Modificamos el ultimo valor vivo a la derecha del ultimo vivo a la izquierda
			atRight[atLeft[L]] = atRight[R];
			if(atRight[R] > 0){
				cout << atRight[R] << endl;
			}
			else{
				cout << "*" << endl;
			}
		}

		cout << "-" << endl;

		cin >> S >> B;
	}

	return 0;
}