#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2==0){
                (j%2==0)? printf("1 ") : printf("0 ");
            }
            else{
                (j%2==0)? printf("0 ") : printf("1 ");
            }
        }
        printf("\n");
        
    }}
