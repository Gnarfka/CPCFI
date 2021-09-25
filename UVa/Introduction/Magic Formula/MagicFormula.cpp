#include <iostream>

using namespace std;


int main() {
    long long int a, b, c, x=0, d, L, contador=0;
    while(true){
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L);

        if(a==0 && b==0 && c==0 && d==0 && L==0){
            break;
        }

        for(int i=0;i<=L;i++){
            x=(a*i*i)+(b*i)+c;
            if(x%d==0){
                contador++;
            }
        }
        printf("%d\n",contador);
        contador=0;
        x=0;
    }
    return 0;
}