#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<=a;j++){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}