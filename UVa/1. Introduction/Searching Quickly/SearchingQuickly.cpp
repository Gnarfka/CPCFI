#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main(){
	int i = 0;
	string input, ignore, keywords[3001], titles[201];

	getline(cin, input);

	while(input.compare("::") != 0){
		ignore = ignore + " " + input;
		getline(cin, input);
	}

	while(getline(cin, input)){
		for(int i = 0; i < input.length(); i++){
			input[i] = tolower(input[i]);
		}

				
	}
	


	return 0;
}