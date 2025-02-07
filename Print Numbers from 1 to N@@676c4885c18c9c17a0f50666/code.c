#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,a,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("%d ",i);
    }
    return 0;
}