#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, resposta=0;

    scanf("%d",&a);

    while(1){
        scanf("%d",&b);
        if(b>0){
            for(int i=0; i<b; i++){
                resposta+=a;
                a++;
            }
            break;
        }
    }

    cout << resposta << endl;

    return 0;
}