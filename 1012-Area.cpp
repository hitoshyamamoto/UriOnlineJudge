#include <bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;

    //Triangulo Retangulo
    cout << "TRIANGULO: " << fixed << setprecision(3) << (A*C)/2 << endl;

    //Circulo
    cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159*C*C << endl;

    //Trapezio
    cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A+B)*C)/2 << endl;

    //Quadrado
    cout << "QUADRADO: " << fixed << setprecision(3) << B*B << endl;

    //Retanculo
    cout << "RETANGULO: " << fixed << setprecision(3) << A*B << endl;

    return 0;
}