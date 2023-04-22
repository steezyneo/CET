#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("The elements in array are: ");
    for(i=0; i<n; i++){
        printf("%2d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%2d ", arr[i]);
    }
    printf("\n");

    if(n < 2) {
        printf("There is no second largest element.");
    }
    else {
        printf("The second largest element is %d.", arr[n-2]);
    }
    return 0;
}
