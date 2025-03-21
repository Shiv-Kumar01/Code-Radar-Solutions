#include <stdio.h>
int isPrime(int n ){
    if (n<=1){
        return 0;
    }
    else{
        for(int i =2; i*i<=n;i++){
            if(n%2==0){
                return 0;
                
            }
            else{
                return 1;
            }
        }
    }
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
