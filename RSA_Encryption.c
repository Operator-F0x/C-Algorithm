#include <stdio.h>
#include <stdlib.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>

// Function to generate RSA key pair
RSA* generateRSAKeyPair() {
    int bits = 2048;
    unsigned long e = RSA_F4;
    RSA* rsa = RSA_generate_key(bits, e, NULL, NULL);
    return rsa;
}

// Function to encrypt message with RSA
int rsaEncrypt(RSA* rsa, unsigned char* message, unsigned char* encrypted) {
    int encryptedLength = RSA_public_encrypt(strlen((char*)message), message, encrypted, rsa, RSA_PKCS1_OAEP_PADDING);
    return encryptedLength;
}

// Function to decrypt message with RSA
int rsaDecrypt(RSA* rsa, unsigned char* encrypted, unsigned char* decrypted) {
    int decryptedLength = RSA_private_decrypt(RSA_size(rsa), encrypted, decrypted, rsa, RSA_PKCS1_OAEP_PADDING);
    return decryptedLength;
}

int main() {
    RSA* rsa = generateRSAKeyPair();

    unsigned char message[] = "HelloWorld";
    unsigned char encrypted[256];
    unsigned char decrypted[256];

    int encryptedLength = rsaEncrypt(rsa, message, encrypted);
    printf("Encrypted message: ");
    for (int i = 0; i < encryptedLength; i++) {
        printf("%02x", encrypted[i]);
    }
    printf("\n");

    int decryptedLength = rsaDecrypt(rsa, encrypted, decrypted);
    decrypted[decryptedLength] = '\0';  // Null-terminate the decrypted string
    printf("Decrypted message: %s\n", decrypted);

    RSA_free(rsa);
    return 0;
}
