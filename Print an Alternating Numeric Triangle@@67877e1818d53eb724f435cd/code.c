#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=0;j<=i;j++){
            if(j%2==0){
                printf("0");
            }
            else{printf("1");}
        }printf("\n");
    }
    return 0;
}