#include<stdio.h>
void arrRead(int arr[], int n) {
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void arrDisplay(int arr[], int n) {
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selecSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minin = i;
        for(int j = i+1; j<n; j++){
            if (arr[j] < arr[minin]){
                minin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minin];
        arr[minin] = temp;
    }
}
int main(){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    arrRead(arr, n);
    selecSort(arr,n);
    arrDisplay(arr,n);
    return 0;
}