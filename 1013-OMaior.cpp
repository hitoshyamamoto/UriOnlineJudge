#include <bits/stdc++.h>
using namespace std;

int comparacao(int V1, int V2){
    int a=V1;
    int b=V2;
    int MaiorAB;
    
    MaiorAB= (a+b+abs(a-b))/2;

    return MaiorAB;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int Resultado;
    Resultado = comparacao(a,b);
    Resultado = comparacao(Resultado,c);

    cout << Resultado << " eh o maior" << endl;

    return 0;
}