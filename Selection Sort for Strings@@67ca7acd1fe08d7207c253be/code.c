void selectionSort(char arr[][],int n){
    for(int i=0;i<n-1;i++){
        int minindx =i;
        for(int j=i+1;j<n;j++){
            if (arr[j][0] < arr[minindx][0]){
                minindx = j;
            } 
        }
        char temp[] = arr[i];
            arr[i] = arr[minindx];
            arr[minindx]= temp;
    }
}
void printArray(char arr[][],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}