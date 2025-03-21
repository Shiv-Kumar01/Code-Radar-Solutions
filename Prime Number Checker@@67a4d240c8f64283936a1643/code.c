#include <stdio.h>
int isprime(int n ){
    if (n<=1){
        printf("0");
    }
    else{
        for(int i =2; i*i<=n;i++){
            if(n%2==0){
                printf("0\n");
                
            }
            else{
                printf(
                    "1\n"
                );
            }
        }
    }
}
int main(){
    int n,num;
    scanf("%d",&n);
    for(int i =1 ; i<=n;i++){
        scanf("%d",&num);
        printf("%d",isprime(num));
    }
}