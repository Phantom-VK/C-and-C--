#include <stdio.h>
#include "qrcodegen.h"

// Function to generate a QR code for a given text
void generateQRCode(const char* text) {
    // Create a QR Code data structure
    uint8_t qrcode[qrcodegen_BUFFER_LEN_MAX];
    uint8_t tempBuffer[qrcodegen_BUFFER_LEN_MAX];

    // Create a QR Code object with the specified text and ECC level
    qrcodegen_encodeText(tempBuffer, qrcode, 0, 0, text);

    // Print the QR Code
    for (int y = 0; y < qrcodegen_getSize(qrcode); y++) {
        for (int x = 0; x < qrcodegen_getSize(qrcode); x++) {
            // Print 'X' for modules (black) and space for white modules
            printf(qrcodegen_getModule(qrcode, x, y) ? "X " : "  ");
        }
        printf("\n");
    }
}

int main() {
    const char* qrCodeData = "Hello, QR Code!";
    printf("Input Data: %s\n", qrCodeData);

    printf("QR Code Pattern:\n");
    generateQRCode(qrCodeData);

    return 0;
}
