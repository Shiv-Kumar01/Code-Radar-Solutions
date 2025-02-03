#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i,c = 1;
    scanf("%d",&a);
    if(a<=1){
        c = 0;
    }
    
    
    else {
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                c =0;
                break;
                
            } 
        
        }
    }
    if (c) printf("Prime");
    else printf("Not Prime");
    return 0;
}