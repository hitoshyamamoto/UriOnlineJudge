#include <bits/stdc++.h>

int saltos(int entr, int resp) {
    int respParcial = 0;
    for (int i=1; i<entr; i++){
        respParcial=(respParcial+resp)%i;
    }
    return respParcial;
}

int main(){
    int entrada, resposta;
    while(scanf("%d",&entrada)!=EOF){
           if(entrada == 0) break;

           resposta = 1;

           while(1){
                if(saltos(entrada,resposta) != 11) resposta++;
                else break;
           }
           printf("%d\n",resposta);
    }
    return 0;
}