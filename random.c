#include <stdlib.h>

char randchar(void) {
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return letters[rand() % 26];
}