#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int a, b;
    while(scanf("%lld %lld", &a, &b)!=EOF){
        unsigned long long int resultado;
        resultado = a^b;

        cout << resultado << endl;
    }

    return 0;
}