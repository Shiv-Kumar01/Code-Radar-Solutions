void selectionSort(char arr[][],int n){
    for(int i=0;i<n-1;i++){
        int minindx =i;
        for(int j=i+1;j<n;j++){
            if (arr[j][0] < arr[minindx][0]){
                minindx = j;
            } 
        }
         char temp[20];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[minIdx]);
        strcpy(arr[minIdx], temp);
    }
}
void printArray(char arr[][],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}