#include <stdio.h>
int main(){
    int i,a,j,k=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        
        printf("\n");
    }
}