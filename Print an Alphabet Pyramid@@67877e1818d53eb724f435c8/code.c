#include<stdio.h>
int main(){
    int a,i,j,k=65;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",k)
            k++;
        }
        printf("\n");
        k=65;
    }
}