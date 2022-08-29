#include <bits/stdc++.h>
using namespace std;

double raiz(double entrada){
    if(entrada == 0) return 0;

    return (1 / (2 + raiz(entrada-1)));
}

int main(){
    double entrada;

    cin  >> entrada;
    cout << fixed << setprecision(10) << 1+raiz(entrada) << endl;

    return 0;
}