#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> coaches;
	int N, check;

	while(cin >> N, N != 0){
		int marshal[N];
		while(cin >> marshal[0], marshal[0] != 0){
			check = 0;
			while(!coaches.empty()){
				coaches.pop();
			}

			for(int i = 1; i < N; i++){
				cin >> marshal[i];
			}

			for(int i = 1; i <= N; i++){
				coaches.push(i);

				while(!coaches.empty() && coaches.top() == marshal[check]){
					coaches.pop();
					check++;
				}
			}

			if(coaches.empty()){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}

		cout << endl;
	}

	return 0;
}