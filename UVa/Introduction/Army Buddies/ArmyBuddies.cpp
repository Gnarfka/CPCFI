#include <iostream>
#include <string>

using namespace std;

int main(){
	int S, B, L, R;
	string L_out, R_out;
	while(true){
		cin >> S >> B;
		if((S == 0) && (B == 0)){
			break;
		}
		
		bool dead[S+1] = { false };

		dead[0] = true;
		dead[S+1] = true;

		for(int i = 0; i < B; i++){
			cin >> L >> R;
			for(int j = L; j <= R; j++){
				dead[j] = true;
			}

			for(int j = L; j >= 1; j--){
				if(!dead[j-1]){
					L = j;
					break;
				}
			}
			for(int j = R; j <= S; j++){
				if(!dead[j+1]){
					R = j;
					break;
				}
			}
			if(!dead[L-1]){
				L_out = to_string(L-1);
			}
			else{
				L_out = "*";
			}
			if(!dead[R+1]){
				R_out = to_string(R+1);
			}
			else{
				R_out = "*";
			}

			cout << L_out << " " << R_out << endl;

		}
		cout<<"-"<<endl;
	}
	return 0;
}