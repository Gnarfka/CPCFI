#include <iostream>

using namespace std;

int main(){
	int months, depNumber;
	double payment, loan;

	while (true) {
		cin >> months >> payment >> loan >> depNumber;
		if (months < 0){
			break;
		}

		double deps[months];

		int m;
		double p;
		while (depNumber--) {
			cin >> m >> p;
			for (int i = m; i < months; i++)
				deps[i] = p;
		}

		int month = 0;
		double monthlyPay = loan / months;
		double worth = (loan + payment) * (1 - deps[0]);
		double curLoan = loan;
		while (worth < curLoan) {
			month++;
			curLoan -= monthlyPay;
			worth = worth * (1-deps[month]);
		}

		cout << month << " month";
		if (month != 1){
			cout << "s";
		}
		cout << endl;
	}

	return 0;
}