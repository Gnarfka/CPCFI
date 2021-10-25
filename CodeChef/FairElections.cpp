#include <functional>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	int T, N, M, sumA, sumB, aux, swaps;

	cin >> T;

	while(T--){
		cin >> N >> M;
		priority_queue<int, std::vector<int>, std::greater<int>> qA;
		priority_queue<int> qB;
		sumA = 0;
		sumB = 0;

		for(int i = 0; i < N; i++){
			cin >> aux;
			sumA+=aux;
			qA.push(aux);
		}

		for(int i = 0; i < M; i++){
			cin >> aux;
			sumB+=aux;
			qB.push(aux);	
		}

		swaps = 0;

		while(sumA <= sumB){
			if(qA.empty() || qB.empty()){
				swaps = -1;
				break;
			}
			sumA += qB.top();
			sumB -= qB.top();

			sumB += qA.top();
			sumA -= qA.top();

			qA.pop();
			qB.pop();

			swaps++;
		}


		if(sumA == sumB){
			swaps = -1;
		}

		cout << swaps << endl;
	}

	return 0;
}