#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada, quant=10;
    int N[quant];
    
    cin>>entrada;

    for(int i=0; i<quant; i++){
        if(i==0) N[i]=entrada;
        else N[i]=N[i-1]*2;

        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }


    return 0;
}