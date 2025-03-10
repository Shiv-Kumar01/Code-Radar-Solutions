#include <stdio.h>
int main(){
    int a,i,j,k=65;
    scanf("%d",&a);
    for(i=a;i<=1;i--){
        for(j=1;j<=i;j++){
        printf("%c ",k);
        k++;
        } k=65;
        printf("\n");
        
    }
}