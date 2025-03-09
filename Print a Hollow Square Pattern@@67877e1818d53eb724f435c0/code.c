#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,k, m;
    scanf("%d",&m);
    for(int i=1,i<=m;i++){
        if(i!=1 && i!=m){
        for(int j=1;j<=m;j++){
            printf("*");
        }}
        else{printf(
            "*"
        );
        for(k=1;k<=m-i;k++){
            printf(" ");
        }} printf(" \n");
    }
    return 0;
}