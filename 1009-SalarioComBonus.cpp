#include <bits/stdc++.h>
using namespace std;

int main(){
    struct Vendedor{
        string Nome;
        double SalarioFixo;
        double Venda;
    };

    struct Vendedor V;
    cin >> V.Nome >> V.SalarioFixo >> V.Venda;

    double Salario = V.SalarioFixo+0.15*V.Venda;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << Salario << endl; 

    return 0;
}