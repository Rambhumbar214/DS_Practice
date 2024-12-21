//write a c program to search an element using linear search method
#include <stdio.h>
#include <conio.h>
// Function for linear search
int linearSearch(int arr[], int size, int target) {
    int i;
    for ( i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the element is not found
}

// Main function
int main() {
    int n,i, target;
    int arr[5];
    int result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

     result = linearSearch(arr, n, target);
    if (result != -1) {
	printf("Element found at index: %d\n", result);
    } else {
	printf("Element not found in the array.\n");
    }

    return 0;
}
