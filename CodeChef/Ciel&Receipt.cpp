#include <iostream>
#include <bitset>

using namespace std;

int main(){
	int T, P, menus;

	cin >> T;

	while(T--){
		cin >> P;

		if(P%2048 == 0){
			menus = P/2048;
		}
		else if (P > 2048){
			menus = P/2048;

			P -= menus*2048;

			bitset<11> P_bin(P);

			menus += P_bin.count();
		}
		else{
			bitset<11> P_bin(P);

			menus = P_bin.count();
		}

		cout << menus << endl;
	}

	return 0;
}