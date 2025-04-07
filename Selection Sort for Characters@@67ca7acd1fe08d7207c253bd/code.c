int selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindx =i;
        for(int j=i+1;j<n;j++){
            if (arr[j] < arr[minindx]){
                minindx = j;
            } 
        }
        int temp = arr[minindx];
            arr[minindx] = arr[i];
            arr[i]= temp;
    }
}
int temp[n];
for(int i=0;i<n;i++){
    temp[i] = arr[i];
}
char printArray(int temp[],int n){
    for(int i=0;i<n;i++){
        printf(
            "%c ",temp[i]
        );
    }
}