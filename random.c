#include <stdlib.h>

//Function to generate a random uppercase character
char randchar() {
    return 'A' + (rand() % 26); // Generate a random letter from A to Z
}