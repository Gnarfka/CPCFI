#include <iostream>

using namespace std;

int main(){
    long long int n, j=0, cont=0;

    cin >> n;

    long long int arr[n];

    for(int i = 0; i < n; i++){
        long long int aux;
        cin >> aux;
        arr[i] = aux;
    }

    while(true){
        if(j == n-1){
            break;
        }
        if(arr[j]>arr[j+1]){
            cont += arr[j] - arr[j+1];
            arr[j+1] = arr[j];
        }
        else{
            j++;
        }
    }

    cout << cont;

    return 0;
}
