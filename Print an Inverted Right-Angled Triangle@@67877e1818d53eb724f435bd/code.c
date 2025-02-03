#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(i=a,i<=1;i--){
        printf("*");
        printf("\n");
    }
    return 0;
}