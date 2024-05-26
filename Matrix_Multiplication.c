
#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[2][2], int secondMatrix[2][2], int result[2][2], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[2][2] = { {1, 2}, {3, 4} };
    int secondMatrix[2][2] = { {5, 6}, {7, 8} };
    int result[2][2];
    multiplyMatrices(firstMatrix, secondMatrix, result, 2, 2, 2, 2);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
