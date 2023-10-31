#include <stdio.h>
#include <stdlib.h>
#include "qrcodegen.h"

int main(void) {
  // Create a QR code generator.
  qrcodegen_generator qr = qrcodegen_generator_new();

  // Set the data to encode.
  qrcodegen_generator_set_data(&qr, "hello world");

  // Get the size of the QR code.
  int width, height;
  qrcodegen_generator_get_size(&qr, &width, &height);

  // Create a buffer to store the QR code.
  uint8_t *buffer = malloc(width * height * 4);

  // Encode the QR code.
  qrcodegen_generator_encode(&qr, buffer, width, height);

  // Print the QR code.
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      printf("%c", (buffer[y * width + x] == 0) ? ' ' : '*');
    }
    printf("\n");
  }

  // Free the buffer.
  free(buffer);

  // Free the QR code generator.
  qrcodegen_generator_free(&qr);

  return 0;
}