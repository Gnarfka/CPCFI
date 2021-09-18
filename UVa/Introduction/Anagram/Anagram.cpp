#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	string input;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> input;
		sort(input.begin(), input.end());
		do {
	    	cout << input << endl;
	  	}while (next_permutation(input.begin(), input.end()));
	}
}