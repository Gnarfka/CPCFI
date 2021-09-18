#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n, aux, sum, numerator, mult, num_hyphen, cases=0, gcd_aux;

	while(true){
		cin >> n;

		if(n == 0){
			break;
		}
		else{
			cout << "Case " << ++cases << ":" << endl;

			for(int i = 0; i < n; i++){
				cin >> aux;
				sum += aux;
			}
			if(sum == 0){
				cout << 0 << endl;
			}
			else if(sum%n == 0){
				if((sum/n) >= 0){
					cout << sum/n << endl;
				}
				else{
					cout << "- " << abs(sum/n) << endl;
				}
			}
			else{
				numerator = sum%n;
				gcd_aux = __gcd(numerator, n);
				mult = (sum-numerator)/n;
				num_hyphen = to_string(abs(n)).size();

				if(gcd_aux != 1){
					numerator /= gcd_aux;
					n /= gcd_aux;
					num_hyphen = to_string(abs(n)).size();
				}

				if(mult == 0 && (numerator < 0 || n < 0)){
					// Imprimimos numerador
					for(int j = 0; j < 2 + num_hyphen - to_string(abs(numerator)).size(); j++){
						cout << " ";
					}
					cout << abs(numerator) << endl;

					// Imprimimos el signo
					cout << "- ";

					// Imprimimos guiones
					for(int j = 0; j < num_hyphen; j++){
						cout << "-";
					}
					cout << endl;

					// Imprimimos denominador
					for(int j = 0; j < 2 + num_hyphen - to_string(abs(n)).size(); j++){
						cout << " ";
					}
					cout << abs(n) << endl;
				}
				else if (mult == 0){
					// Imprimimos numerador
					for(int j = 0; j < num_hyphen - to_string(abs(numerator)).size(); j++){
						cout << " ";
					}
					cout << abs(numerator) << endl;

					// Imprimimos guiones
					for(int j = 0; j < num_hyphen; j++){
						cout << "-";
					}
					cout << endl;

					// Imprimimos denominador
					for(int j = 0; j < num_hyphen - to_string(abs(n)).size(); j++){
						cout << " ";
					}
					cout << abs(n) << endl;
				}
				else if(mult > 0){
					// Imprimimos numerador
					for(int j = 0; j < to_string(abs(mult)).size() + num_hyphen - to_string(abs(numerator)).size(); j++){
						cout << " ";
					}
					cout << abs(numerator) << endl;

					// Imprimimos multiplicador y guiones
					cout << abs(mult);
					for(int j = 0; j < num_hyphen; j++){
						cout << "-";
					}
					cout << endl;

					// Imprimimos denominador
					for(int j = 0; j < to_string(abs(mult)).size() + num_hyphen - to_string(abs(n)).size(); j++){
						cout << " ";
					}
					cout << abs(n) << endl;
				}
				else{
					// Imprimimos numerador
					for(int j = 0; j < to_string(abs(mult)).size() + 2 + num_hyphen - to_string(abs(numerator)).size(); j++){
						cout << " ";
					}
					cout << abs(numerator) << endl;

					// Imprimimos multiplicador y guiones
					cout << "- " << abs(mult);
					for(int j = 0; j < num_hyphen; j++){
						cout << "-";
					}
					cout << endl;

					// Imprimimos denominador
					for(int j = 0; j < to_string(abs(mult)).size() + 2 + num_hyphen - to_string(abs(n)).size(); j++){
						cout << " ";
					}
					cout << abs(n) << endl;
				}
			}
		}
		sum = 0;
	}	

	return 0;
}