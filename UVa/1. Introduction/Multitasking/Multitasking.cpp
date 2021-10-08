#include <iostream>
#include <bitset>

using namespace std;

bool conflict(int n, int m){
	bitset<1000003> time;
	time.reset();
	int auxS, auxE, auxR;
	bool hasConflict = false;

	for(int i = 0; i < n; i++){
		cin >> auxS >> auxE;

		for(int j = auxS+1; j <= auxE; j++){
			if(time.test(j)){
				hasConflict = true;
			}
			else{
				time.set(j, true);
			}
		}
	}

	for(int i = 0; i < m; i++){
		cin >> auxS >> auxE >> auxR;

		while(auxS < 1000000){
			for(int j = auxS+1; j <= auxE; j++){
				if(time.test(j)){
					hasConflict = true;
				}
				else{
					time.set(j, true);
				}
			}

			auxS += auxR;
			auxE += auxR;

			if(auxE > 1000000){
				auxE = 1000000;
			}
		}
	}

	return hasConflict;
}

int main(){
	int n, m;
  	cin >> n >> m;

	while(n != 0 || m != 0){
		if(conflict(n, m)){
			cout << "CONFLICT" << endl;
		}
		else{
			cout << "NO CONFLICT" << endl;
		}

		cin >> n >> m;
	}

	return 0;
}