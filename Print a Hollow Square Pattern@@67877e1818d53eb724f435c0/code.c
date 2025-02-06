#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scanf("%d",&m);
    for(int i=1,i<=m;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
    }
    return 0;
}