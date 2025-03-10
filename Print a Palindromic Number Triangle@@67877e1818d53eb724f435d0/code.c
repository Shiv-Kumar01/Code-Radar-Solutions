
#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*a-1;j++){
            if(j>i){
                for(k=a-1;k>=1;k--){
                    printf("%d",j);
                }
            }
            else{
            printf("%d",j);}
        }
        printf("\n");
    }}