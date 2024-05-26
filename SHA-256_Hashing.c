#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

// Function to compute SHA-256 hash of a string
void computeSHA256(char *str, unsigned char digest[SHA256_DIGEST_LENGTH]) {
    SHA256((unsigned char*)str, strlen(str), digest);
}

// Function to print the SHA-256 hash
void printSHA256(unsigned char digest[SHA256_DIGEST_LENGTH]) {
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", digest[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "HelloWorld";
    unsigned char digest[SHA256_DIGEST_LENGTH];

    computeSHA256(str, digest);
    printf("SHA-256 hash: ");
    printSHA256(digest);

    return 0;
}
