char selectionSort(int arr[],int n){
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
char printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(
            "%c ",arr[i]
        );
    }
}