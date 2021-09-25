#include <iostream>
#include <list>

using namespace std;

void showlist(list <char> g)
{
    list <char> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << *it;
    cout << '\n';
}

int main(){
	list <char> output;
	list <char>::iterator cursor;
	string input;

	while(getline(cin, input)){
		cursor = output.begin();
		for(int i = 0; i < input.length(); i++){
			if(input[i] == '['){
				cursor = output.begin();
			}
			else if (input[i] == ']'){
				cursor = output.end();
			}
			else{
				output.insert(cursor, input[i]);
			}
		}
		
		showlist(output);
		output.list::clear();
	}

	return 0;
}