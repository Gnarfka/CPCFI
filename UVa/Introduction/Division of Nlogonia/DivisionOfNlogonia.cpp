#include <iostream>

using namespace std;

int main(){
	int K, N, M, X, Y;

	cin >> K;

	while (K != 0){
		cin >> N >> M;
		for(int i = 0; i < K; i++){
			cin >> X >> Y;
			if(X-N == 0 || Y-M == 0){
				cout << "divisa" << endl;
			}
			else if(X-N > 0){
				if (Y-M > 0){
					cout << "NE" << endl;
				}
				else if(Y-M < 0){
					cout << "SE" << endl;
				}
			}
			else{
				if(Y-M > 0){
					cout << "NO" << endl;
				}
				else if(Y-M < 0){
					cout << "SO" << endl;
				}
			} 
		}
		cin >> K;
	}

	return 0;
}