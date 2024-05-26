#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

// Function to compute MD5 hash of a string
void computeMD5(char *str, unsigned char digest[MD5_DIGEST_LENGTH]) {
    MD5((unsigned char*)str, strlen(str), digest);
}

// Function to print the MD5 hash
void printMD5(unsigned char digest[MD5_DIGEST_LENGTH]) {
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", digest[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "HelloWorld";
    unsigned char digest[MD5_DIGEST_LENGTH];

    computeMD5(str, digest);
    printf("MD5 hash: ");
    printMD5(digest);

    return 0;
}
