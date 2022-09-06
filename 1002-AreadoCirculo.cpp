#include <bits/stdc++.h>
using namespace std;

int main(){
    double pi=3.14159;
    double area, raio;

    cin >> raio;

    area = pi*raio*raio;

    cout << fixed << setprecision(4) << "A=" << area << endl;

    return 0;
}