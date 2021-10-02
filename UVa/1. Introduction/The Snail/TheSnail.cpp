#include <iostream>

using namespace std;

int main(){
	double H, U, D, F, pos, fatigue;
	int days;

	cin >> H >> U >> D >> F;
	fatigue = (U * F) / 100;

	while(H > 0 && H <= 100){
		days = 1;
		pos = 0;
		fatigue = (U * F) / 100;
		while(true){
			pos += U;
			if(U > 0){
				U -= fatigue;
			}
			if(pos > H){
				cout << "success on day " << days << endl;
				break;
			}
			pos -= D;
			if(pos < 0){
				cout << "failure on day " << days << endl;
				break;
			}
			days++;
		}
		cin >> H >> U >> D >> F;
	}

	return 0;
}