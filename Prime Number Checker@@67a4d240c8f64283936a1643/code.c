#include <stdio.h>
int isPrime(int a ){
    if (a<=1){
        return 0;
    }
    for(int i =2; i*i<=a;i++){
            if(a%i==0){
                return 0; 
            }
        }
        return 1;
    }

int main(){
    int n;
    scanf("%d",&n);
    for(int i =1 ; i<=n;i++){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
}
