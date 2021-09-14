#include <stdio.h>

using namespace std;

int main(){
	bool band = true;
	char c;
	while(scanf("%c", &c)==1){
		if(c == '"' && band == true){
			printf("``");
			band = !band;
		}
		else if(c == '"' && band == false){
			printf("''");
			band = !band;
		}
		else{
			printf("%c", c);
		}
	}
	return 0;
}