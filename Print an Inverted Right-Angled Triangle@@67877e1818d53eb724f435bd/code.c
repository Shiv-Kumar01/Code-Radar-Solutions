#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        for(j=a;j>=a;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}