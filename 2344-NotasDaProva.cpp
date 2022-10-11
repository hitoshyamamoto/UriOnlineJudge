#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada;
    cin >> entrada;

    if(entrada==0) cout << "E" << endl;
    else if(entrada>=1 && entrada<=35) cout << "D" << endl;
    else if(entrada>=36 && entrada<=60) cout << "C" << endl;
    else if(entrada>=61 && entrada<=85) cout << "B" << endl;
    else if(entrada>=86 && entrada<=100) cout << "A" << endl;

    return 0;
}