#include <stdio.h>
int main(){
    int i,a,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=i;j<=i;j++){
            printf("%d ",j);
            
        }
        
        printf("\n");
    }
}