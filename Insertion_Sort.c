#include <stdio.h>


void insertion_sort(int arr[], int n){

    int key = 0;
    int i;

    for(int j = 0; j < n; j++){

        key = arr[j];
        i = j - 1;

        while (i >= 0 && arr[i] > key){
            
            arr[ i + 1 ] = arr[i];
            i = i - 1;

        }
        
        arr[ i + 1 ] = key;

    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main (void) {
    
    int arr[] = {12, 11, 13, 5, 6, 50, 30, 21 ,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);
    printArray(arr, n);

    return 0;

}