#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string input, output1, output2;

	while(true){
		getline(cin, input);
		if(input.compare("DONE") == 0){
			break;
		}
		output1 = "";
		output2 = "";
		for(int i = 0; i < input.length(); i++){
			char x = input[i];
			if((x!=' ') && (x!='!') && (x!='?') && (x!='.') && (x!=',')){
				x = input[i];
				output1 += tolower(x);
			}
		}
		for(int i = input.length()-1; i >= 0; i--){
			char x = input[i];
			if((x!=' ') && (x!='!') && (x!='?') && (x!='.') && (x!=',')){
				x = input[i];
				output2 += tolower(x);
			}
		}
		if(output1.compare(output2) == 0){
			cout << "You won't be eaten!" << endl;
		}
		else{
			cout << "Uh oh.." << endl;
		}
	}

	return 0;
}