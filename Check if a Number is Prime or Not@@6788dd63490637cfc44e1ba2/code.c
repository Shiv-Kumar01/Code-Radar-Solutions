#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }
    else {
        for(i=2;i*i<=a;i++){
            if(i%2==0){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }
    return 0;
}