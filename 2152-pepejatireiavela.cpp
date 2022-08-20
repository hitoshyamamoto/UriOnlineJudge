#include <bits/stdc++.h>
using namespace std;

int main(){
    int quantTest=0;

    scanf("%d",&quantTest);
    for(int i=0; i<quantTest; i++){
        int hora,min,sit;
        scanf("%d %d %d",&hora,&min,&sit);
        if(hora<10) printf("0%d:",hora);
        else printf("%d:",hora);

        if(min<10) printf("0%d - ",min);
        else printf("%d - ",min);

        if(sit==0) printf("A porta fechou!\n");
        else printf("A porta abriu!\n");
    }
    return 0;
}