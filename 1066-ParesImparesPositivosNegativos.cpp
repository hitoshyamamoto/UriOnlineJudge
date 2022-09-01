#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada, par=0, impar=0, positivo=0, negativo=0;
    for(int i=0; i<5; i++){
        cin >> entrada;

        if(entrada>0) positivo++;
        else if(entrada<0) negativo++;

        if(entrada%2==0) par++;
        else impar++;
    }

    cout<<par<<" valor(es) par(es)"<<endl;
    cout<<impar<<" valor(es) impar(es)"<<endl;
    cout<<positivo<<" valor(es) positivo(s)"<<endl;
    cout<<negativo<<" valor(es) negativo(s)"<<endl; 

    return 0;
}