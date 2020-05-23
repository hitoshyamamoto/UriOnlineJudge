#include <bits/stdc++.h>
using namespace std;

int main(){
    double aux;
    int numerosPositivos=0;

    for(int i=0; i<6; i++){
        scanf("%lf",&aux);
        if(aux>=0) numerosPositivos++;
    }
    printf("%d valores positivos\n",numerosPositivos);
}