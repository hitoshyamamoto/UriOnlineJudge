#include <bits/stdc++.h>
using namespace std;

int main(){
    double eficiencia = 12;
    double tempo, velocidade;

    cin >> tempo >> velocidade;

    double litros;
    litros = (velocidade*tempo)/eficiencia;

    cout << fixed << setprecision(3) << litros << endl;

    return 0;
}