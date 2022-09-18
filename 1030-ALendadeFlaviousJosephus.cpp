#include <bits/stdc++.h>
using namespace std;

int josephus(int np, int init){
    if (np == 1)
        return 1;
    else
        return (josephus(np-1, init)+ init-1)%np + 1;
}

int main(){
    int quant, caso=0;
    cin >> quant;

    while(quant--){
        caso++;
        int participantes, iniciante;
        cin >> participantes >> iniciante;

        int resposta = josephus(participantes, iniciante);
        cout << "Case " << caso << ": " << resposta << endl;
    }

    return 0;
}