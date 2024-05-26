#include <stdio.h>
#include <string.h>

// Function to encrypt the text using Caesar Cipher
void caesarCipherEncrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A';
        }
        text[i] = ch;
    }
}

// Function to decrypt the text using Caesar Cipher
void caesarCipherDecrypt(char text[], int shift) {
    caesarCipherEncrypt(text, 26 - shift);
}

int main() {
    char text[] = "HelloWorld";
    int shift = 3;

    printf("Original text: %s\n", text);

    caesarCipherEncrypt(text, shift);
    printf("Encrypted text: %s\n", text);

    caesarCipherDecrypt(text, shift);
    printf("Decrypted text: %s\n", text);

    return 0;
}
