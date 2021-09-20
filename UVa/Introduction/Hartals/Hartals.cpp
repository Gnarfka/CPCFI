#include <iostream>

using namespace std;

int main(){
	int test, N_days, parties, hartal;

	cin >> test;

	while(test--){
		int days_lose = 0;
		cin >> N_days;
		bool check[N_days+1] = { false };
		cin >> parties;

		for(int i = 0; i < parties; i++){
			cin >> hartal; 
			for(int j = hartal; j <= N_days; j+=hartal){
				if(j%7 != 0 && j%7 != 6){
					if(check[j] == false){
						check[j] = true;
						days_lose++;
					}
				}
			}
		}
		cout << days_lose << endl;
	}

	return 0;
}