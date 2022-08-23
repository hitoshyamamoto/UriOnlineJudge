#include <bits/stdc++.h>
using namespace std;

int main(){
    float valor, soma=0, media=0, count=0;

    while(cin>>valor){
        if(valor>=0){
            count++;
            soma+=valor;
        }
        else{
            media=soma/count;
            cout<<setprecision(2)<<fixed<<media<<endl;
            break;
        }
    }

    return 0;
}