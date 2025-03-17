
#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",j);
        }
        for(int m=a-1;m>=1;m--){
            printf("%d",j);
        }
        printf("\n");
    }
    }