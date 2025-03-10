#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                (j%2==0)? printf("0 ") : printf("1 ");
            }
            else{
                (j%2==0)? printf("1 ") : printf("0 ");
            }
        }printf("\n");
    }
    return 0;
}