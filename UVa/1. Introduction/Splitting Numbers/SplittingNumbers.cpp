#include <iostream>
#include <bitset>

#define max 32

using namespace std;

int main(){
	int n;
	bool flag;
	bitset<max> a;
	bitset<max> b;

	while(cin >> n, n != 0){
		bitset<max> number(n);
		flag = true;

		for(int i = 0; i < max; i++){
			if(number.test(i)){
				if(flag){
					a.set(i, true);
					flag = false;
				}
				else{
					b.set(i, true);
					flag = true;
				}
			}
		}

		cout << a.to_ulong() << " " << b.to_ulong() << endl;

		a.reset();
		b.reset();
	}

	return 0;
}