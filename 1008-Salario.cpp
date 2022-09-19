#include <bits/stdc++.h>
using namespace std;

int main(){
    struct funcionario{
        int Id;
        int Horas;
        double Valor;
    };

    struct funcionario F;
    cin >> F.Id >> F.Horas >> F.Valor;

    double Salario = F.Horas*F.Valor;
    cout << "NUMBER = " << F.Id << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << Salario << endl;

    return 0;
}