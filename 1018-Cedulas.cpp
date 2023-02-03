#include <bits/stdc++.h>
using namespace std;

int main(){
    double entrada;
    int nota;

    cin >> entrada;

    cout << entrada << endl;

    //Nota 100
    nota = entrada/100;
    cout << nota << " nota(s) de R$ 100,00" << endl;
    entrada = entrada-nota*100;

    //Nota 50
    nota = entrada/50;
    cout << nota << " nota(s) de R$ 50,00" << endl;
    entrada = entrada-nota*50;

    //Nota 20
    nota = entrada/20;
    cout << nota << " nota(s) de R$ 20,00" << endl;
    entrada = entrada-nota*20;

    //Nota 10
    nota = entrada/10;
    cout << nota << " nota(s) de R$ 10,00" << endl;
    entrada = entrada-nota*10;

    //Nota 5
    nota = entrada/5;
    cout << nota << " nota(s) de R$ 5,00" << endl;
    entrada = entrada-nota*5;

    //Nota 2
    nota = entrada/2;
    cout << nota << " nota(s) de R$ 2,00" << endl;
    entrada = entrada-nota*2;

    //Nota 1
    nota = entrada;
    cout << nota << " nota(s) de R$ 1,00" << endl;
}