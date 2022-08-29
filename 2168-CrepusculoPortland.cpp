#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin>>n;

    int matriz[n+1][n+1]={};

    for(int i=0; i<n+1; i++){
        for(int j=0; j<n+1; j++){
            int entrada;
            
            cin>>entrada;
            matriz[i][j] = entrada;
        }
    }

    for(int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            if(matriz[i][j]+matriz[i][j+1]+matriz[i+1][j]+matriz[i+1][j+1]>=2){
                cout<<'S';
            }else{
                cout<<'U';
            }
        }
        cout<<endl;
    }

    return 0;
}