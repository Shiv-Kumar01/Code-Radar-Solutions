#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    a = tolower(a);
    if(a=='r'){
        printf("Stop");
    }
    else if(a=='g'){
        printf("Go");
    }
    else if(a=='y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}