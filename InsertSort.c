#include<stdio.h>
void arrRead(int arr[], int n) {
    printf("Enter %d integers:\n ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void InsertSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int x = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > x) {
            arr[j+1] = arr[j];
            j--;
        }
         arr[j+1] = x;
    }
}
void arrDisplay(int arr[], int n) {
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    arrRead(arr, n);
    InsertSort(arr, n);
    arrDisplay(arr, n);
    return 0;
}