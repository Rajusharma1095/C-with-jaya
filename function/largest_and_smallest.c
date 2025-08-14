#include <stdio.h>
#include <limits.h> 
void findMinMax(int* a, int num, int* largest, int* smallest) {

    *largest = INT_MIN; 
    *smallest = INT_MAX;

    for (int i = 0; i < num; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
        }
        if (a[i] < *smallest) {
            *smallest = a[i];
        }
    }
}
int main() {
    int arr[10]; 
    int num;     
    int i;       
    printf("Enter Number of elements you want to include (max 10): ");
    scanf("%d", &num);
    if (num <= 0 || num > 10) {
        printf("Invalid number of elements. Please enter a number between 1 and 10.\n");
        return 1; 
    }

    printf("Enter %d elements:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int largestNum, smallestNum;
    findMinMax(arr, num, &largestNum, &smallestNum);

    printf("Largest element: %d\n", largestNum);
    printf("Smallest element: %d\n", smallestNum);
    return 0; 
}