#include <stdio.h>

// Function to print the first n Fibonacci numbers iteratively
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n = 10;
    printf("First %d Fibonacci numbers: ", n);
    printFibonacci(n);
    return 0;
}
