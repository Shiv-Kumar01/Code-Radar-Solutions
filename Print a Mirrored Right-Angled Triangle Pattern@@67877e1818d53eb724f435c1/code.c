#include<stdio.h>
int main(){
    int i,a,j;
    scanf("%d",&a);
    for(i<=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(j=1;j<=a;j++){
            printf("*");
        }
        printf(
            "\n"
        );
    }
}