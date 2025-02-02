#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a==1 || a==3 || a==4 || a==6 ||a==8 || a==10 || a==12){
        printf("31");
    }
    return 0;
}