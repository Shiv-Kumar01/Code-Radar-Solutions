#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
        for(i=1;i<=a;i++){
            for(j=1;j<=a-i;j++){
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++){
                printf("*");
            }
            printf("\n");}
            for (i = a - 1; i >= 1; i--) {
        for (j = 1; j <= a - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
            
        }
    
