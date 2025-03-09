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
            for(i=1;i<=a;i++){
            int x = a-1;
            for(j=x;j>=1;j--){
                for(k=1;k<=x-j;k++){
                printf(" ");
            }
                for(k=1;k<=j*2-1;k++){
                printf("*");
            }
            printf("\n");
            }
            
        }
    
}