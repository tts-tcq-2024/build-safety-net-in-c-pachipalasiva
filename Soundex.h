#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>
#include<stdio.h>

char getSoundexCode(char c) {
    c = toupper(c);
    switch (c) {
        case 'B': case 'F': case 'P': case 'V': return '1';
        case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z': return '2';
        case 'D': case 'T': return '3';
        case 'L': return '4';
        case 'M': case 'N': return '5';
        case 'R': return '6';
        default: return '0'; // For A, E, I, O, U, H, W, Y
    }
}

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]); // Keep the first letter

    int sIndex = 1; // Index for soundex code

    // Iterate through the name to generate Soundex code
    for (int i = 1; i < len && sIndex < 4; i++) {
        char code = getSoundexCode(name[i]);

        // Add to soundex if it's a valid code and not the same as the previous one
        if (code != '0' && code != soundex[sIndex - 1]) {
            soundex[sIndex++] = code;
        }
    }

    // Fill with zeros if less than 4 characters
    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }
    soundex[4] = '\0'; // Null-terminate the string
}

int main() {
    const char *name = "shiva";
    char soundex[5]; // Soundex code will be stored here (4 characters + '\0')

    generateSoundex(name, soundex);

    printf("Soundex code for '%s' is '%s'\n", name, soundex);

    return 0;
}
#endif // SOUNDEX_H
