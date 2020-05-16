#include <bits/stdc++.h>
using namespace std;

double calculoImposto(double renda, int opcao, double imposto){
    if(opcao==0){
        renda-=2000;
        if(renda<=0) return 0;
        else return calculoImposto(renda,1,0);
    }
    else if(opcao==1){
        if(renda<=1000){
            renda*=0.08;
            return renda;
        }
        else{
            renda -=1000;
            return calculoImposto(renda,2,80);
        }
    }
    else if(opcao==2){
        if(renda<=1500){
            renda*=0.18;
            return renda+imposto;
        }
        else{
            renda-=1500;
            return calculoImposto(renda,3,imposto+270);
        }
    }
    else if(opcao==3){
        imposto += renda*0.28;
        return imposto;
    }
    else return 0;
}

int main(){
    double renda;
    double imposto;
    scanf("%lf",&renda);

    imposto = calculoImposto(renda,0,0);

    if(imposto==0) printf("Isento\n");
    else printf("R$ %.2lf\n",imposto);

    return 0;
}