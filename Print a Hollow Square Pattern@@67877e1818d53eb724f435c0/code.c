#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i==1 or i==a){
            for(j=1;j<=a;j++){
                printf("*");
            }
        }
        else{

        }for(j=1;j<=a;j++){
            if(j!=1 || j!=a){
                printf(" ");
            }
        }printf("\n")
    }
}