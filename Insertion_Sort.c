#include <stdio.h>

// Function to perform insertion sort on an array of integers
void insertion_sort(int arr[], int n){

    int key = 0;
    int i;

    // Loop through the array from the second element
    for(int j = 0; j < n; j++){

        // Set the key to the current element
        key = arr[j];
        // Set i to the index of the previous element
        i = j - 1;

        // Move all elements greater than the key to one position ahead
        while (i >= 0 && arr[i] > key){
            
            arr[ i + 1 ] = arr[i];
            i = i - 1;

        }
        
        // Insert the key at the correct position
        arr[ i + 1 ] = key;

    }
}

// Function to print an array of integers
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main (void) {
    
    // Declare an array of integers
    int arr[] = {12, 11, 13, 5, 6, 50, 30, 21 ,3};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using insertion sort
    insertion_sort(arr, n);
    // Print the sorted array
    printArray(arr, n);

    return 0;

}
