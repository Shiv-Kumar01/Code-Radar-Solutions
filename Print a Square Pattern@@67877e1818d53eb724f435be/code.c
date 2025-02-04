#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=a;j++){
            printf("* ");
            printf("\n");
        }
    }

    return 0;
}