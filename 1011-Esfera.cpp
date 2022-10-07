#include <bits/stdc++.h>
using namespace std;

int main(){
    double pi = 3.14159;
    double raio;
    cin >> raio;

    double esfera = (4/3.0)*pi*raio*raio*raio;
    cout << "VOLUME = " << fixed << setprecision(3) << esfera << endl;

    return 0;
}