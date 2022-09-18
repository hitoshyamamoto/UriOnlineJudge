#include <bits/stdc++.h>
using namespace std;

int main(){
    struct produto{
        int id;
        int quantidade;
        double preco;
    };

    struct produto P1;
    struct produto P2;
    cin >> P1.id >> P1.quantidade >> P1.preco;
    cin >> P2.id >> P2.quantidade >> P2.preco;

    double valorTotal;
    valorTotal = P1.quantidade*P1.preco + P2.quantidade*P2.preco;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorTotal << endl;

    return 0;
}