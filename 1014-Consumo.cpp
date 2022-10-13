#include <bits/stdc++.h>
using namespace std;

int main(){
    double Distancia;
    double Litros;

    cin >> Distancia >> Litros;

    double Resultado = Distancia/Litros;

    cout << fixed << setprecision(3) << Resultado << " km/l" << endl;

    return 0;
}