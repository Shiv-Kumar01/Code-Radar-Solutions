int selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindx =arr[0];
        for(int j=i+1;j<n;j++){
            if (arr[j] < minindx){
                minindx = arr[j];
            } 
            int temp = minindx;
            arr[minindx] = arr[i];
            arr[i]= temp;
        }
    }
}
int printArray(int arr,int n){
    for(int i=0;i<n;i++){
        printf(
            "%d ",arr[i]
        );
    }
}