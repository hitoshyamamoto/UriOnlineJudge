#include <bits/stdc++.h>
using namespace std;

double calculoImposto(double renda, int opcao, double imposto){
    if(opcao==0){
        printf("%.2lf ||=> ",renda);
        renda-=2000;
        printf("%.2lf\n",renda);
        if(renda<=0) return 0;
        else return calculoImposto(renda,1,0);
    }
    else if(opcao==1){
        printf("%.2lf  ||=> ",renda);
        if(renda<=1000){
            renda*=0.08;
            printf("%.2lf\n",renda);
            return renda;
        }
        else{
            renda -=1000;
            printf("%.2lf\n",renda);
            return calculoImposto(renda,2,80);
        }
    }
    else if(opcao==2){
        printf("%.2lf  ||=> ",renda);
        if(renda<=1500){
            renda*=0.18;
            printf("%.2lf\n",renda);
            return renda+imposto;
        }
        else{
            renda-=1500;
            printf("%.2lf\n",renda);
            return calculoImposto(renda,3,imposto+270);
        }
    }
    else if(opcao==3){
        printf("%.2lf\n",renda);
        imposto += renda*0.28;
        printf("%.2lf\n",imposto);
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