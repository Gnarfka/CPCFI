#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, 
		X,
		A,
		numberMin,
		different,
		midIndex;

	while(cin >> n){
		int numbers[n];
		numberMin = 1;
		different = 0;

		for(int i = 0; i < n; i++){
			cin >> X;
			numbers[i] = X;
		}

		sort(numbers, numbers+n);

		if(n%2 == 0){
			midIndex = n/2 - 1;

			A = numbers[midIndex];

			int midAux(midIndex);
			while(numbers[midIndex] == numbers[--midAux] || numbers[midIndex+1] == numbers[midAux]){
				if(midAux < 0 || midAux >= n){
					break;
				}
				numberMin++;
			}

			midAux = midIndex;
			while(numbers[midIndex] == numbers[++midAux] || numbers[midIndex+1] == numbers[midAux]){
				if(midAux < 0 || midAux >= n){
					break;
				}
				numberMin++;
			}

			different = (numbers[midIndex+1] - numbers[midIndex]) + 1;
		}
		else{
			midIndex = n/2;

			A = numbers[midIndex];

			int midAux(midIndex);
			while(numbers[midIndex] == numbers[--midAux]){
				if(midAux < 0 || midAux >= n){
					break;
				}
				numberMin++;
			}

			midAux = midIndex;
			while(numbers[midIndex] == numbers[++midAux]){
				if(midAux < 0 || midAux >= n){
					break;
				}
				numberMin++;
			}

			different = 1;
		}

		cout << A << " " << numberMin << " " << different << endl;
	}

	return 0;
}