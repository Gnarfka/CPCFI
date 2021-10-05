#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <cctype>
#include <map>

using namespace std;

string getUpper(string convert){
	for(int ch = 0; ch < convert.length(); ch++){
		convert[ch] = toupper(convert[ch]);
	}

	return convert;
}

string getLower(string convert){
	for(int ch = 0; ch < convert.length(); ch++){
		convert[ch] = tolower(convert[ch]);
	}

	return convert;
}

int main(){
	int i, j, k;
	set <string> toIgnore;
	string input;
	multimap<string, string> searchTitles;

	getline(cin, input);

	while(input.compare("::") != 0){
		toIgnore.insert(input);
		getline(cin, input);
	}

	while(getline(cin, input)){
		input = getLower(input);

		for(i = 0; i < input.length(); i++){
			if(!isalpha(input[i])){
				continue;
			}
			string keyword;
			for(j = i; j < input.length() && isalpha(input[j]); j++){
				keyword += input[j];
			}

			if(!toIgnore.count(keyword)){
				string titleWithKeyword = input;
				keyword = getUpper(keyword);
				titleWithKeyword.replace(i, keyword.length(), keyword);
				searchTitles.insert(pair<string,string> (keyword, titleWithKeyword));
			}
			i = j;
		}		
	}

	for(const auto& output : searchTitles){
		cout << output.second << endl;
	}

	return 0;
}