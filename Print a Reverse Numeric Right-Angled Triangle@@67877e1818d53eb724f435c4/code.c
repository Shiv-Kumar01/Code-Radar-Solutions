#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,j;
    scanf(
        "%d",&a
    );
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            printf("%d ",j);
            a--;
            
        }printf("\n");
    }
    return 0;
}