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
    else if(a==2){
        printf("Prime");
    }
    else {
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                printf("Not Prime");
                return 0;
            } 
        else{
                printf("Prime");
            }
        }
    }
    return 0;
}