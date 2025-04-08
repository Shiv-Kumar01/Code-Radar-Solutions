void selectionSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minindx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindx]) {
                minindx = j;
            }
        }
       
        char temp = arr[minindx];
        arr[minindx] = arr[i];
        arr[i] = temp;
    }
}
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}