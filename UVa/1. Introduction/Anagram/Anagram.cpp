#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(char A, char B){
	// 		a     ==      a
	if(tolower(A) == tolower(B)){
		//     a < A
		return A < B;
	}
	//			a     <    b || B
	return tolower(A) < tolower(B);
}

int main(){
	int n;
	string input;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> input;
		sort(input.begin(), input.end(), comparator);
		do {
	    	cout << input << endl;
	  	}while (next_permutation(input.begin(), input.end(), comparator));
	}
}