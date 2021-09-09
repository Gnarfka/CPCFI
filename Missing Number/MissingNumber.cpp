#include <iostream>

using namespace std;

int main(){
    int n, aux;

    cin >> n;

    int arr[n+1];

    for(int i = 0; i < n-1; i++){
        cin >> aux;

        arr[aux] = 1;
    }

    for(int j = 1; j <= n; j++){
        if(arr[j] != 1){
            cout << j;
        }
    }

    return 0;
}
