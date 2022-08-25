#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int i=0; i<n; i++){
        int a, b, soma=0;
        cin>>a>>b;

        if(a<b) for(int j=a+1; j<b; j++){
            if(j%2!=0) soma+=j;
        }
        else for(int j=b+1; j<a; j++){
            if(j%2!=0) soma+=j;
        }
        cout<<soma<<endl;
    }

    return 0;
}