#include <bits/stdc++.h>
using namespace std;

int main(){

    double salario;
    double percentual;

    scanf("%lf",&salario);
    if(salario>=0 && salario<=400) percentual=1.15;
    else if(salario>400 && salario<=800) percentual=1.12;
    else if(salario>800 && salario<=1200) percentual=1.10;
    else if(salario>1200 && salario<=2000) percentual=1.07;
    else if(salario>2000) percentual=1.04;

    printf("Novo salario: %.2lf\n",salario*percentual);
    printf("Reajuste ganho: %.2lf\n",salario*(percentual-1));
    printf("Em percentual: %.0lf %%\n",(percentual-1)*100);

    return 0;
}