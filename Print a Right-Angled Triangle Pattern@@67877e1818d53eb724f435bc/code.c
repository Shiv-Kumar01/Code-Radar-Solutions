#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i, a,j;
    scanf("%d",&a);
    for(i=1;i>=a;i++){
        for(j=1;j>=i;j++){
            printf(
                "* "
            );
        }
    }
    return 0;
}