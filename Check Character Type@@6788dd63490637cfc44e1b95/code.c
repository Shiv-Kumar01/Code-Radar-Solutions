#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    ch = tolower(ch);
    if(isalpha(ch)){
        if (ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Charcater");
    }

    return 0;
}