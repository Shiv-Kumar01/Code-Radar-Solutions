#include <stdio.h>
int main(){
    int i,j,a,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<=(2*i-1);j++){
            printf(" ");
        }
        for(k=i;k<=a;k++){
            printf("*");
        }
        printf("\n");
    }
}