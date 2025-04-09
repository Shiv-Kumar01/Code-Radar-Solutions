#include<string.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int minindx =i;
        for(int j=i+1;j<n;j++){
            if (arr[j][0] < arr[minindx][0]){
                minindx = j;
            } 
        }
         char temp[20];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[minindx]);
        strcpy(arr[minindx], temp);
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}