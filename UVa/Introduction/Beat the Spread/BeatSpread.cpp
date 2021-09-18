#include <iostream>

using namespace std;

int main(){
	long long int n, s, d, x, y;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> s >> d;

		if((s-d) < 0 || (s+d)%2!=0 || (s-d)%2!=0){
			cout << "impossible" << endl;
		}
		else{
			x = (s+d)/2;
			y = (s-d)/2;
			if(x > y){
				cout << x << " " << y << endl;
			}
			else{
				cout << y << " " << x << endl;
			}
		}		
	}

	return 0;
}