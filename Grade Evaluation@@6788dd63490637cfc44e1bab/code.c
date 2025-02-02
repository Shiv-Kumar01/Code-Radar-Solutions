#include <stdio.h>
#include<ctype.h>


char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    a = tolower(a);
    if(a=='a'){
        printf("Excellent");
    }
    else if(a=='b'){
        printf("Good");
    }
    else if(a=='c'){
        printf("Average");
    }
    else if(a=='d'){
        printf("Below Average");
    }
else if(a=='f'){
    printf("Fail");
}
else{
    printf(
        "Invalid grade"
    );
}
    return 0;
}