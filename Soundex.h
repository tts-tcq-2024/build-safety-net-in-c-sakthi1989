#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <ctype.h>
#include <string.h>

char getSoundexCode(char c) {
    switch (toupper(c)) {
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
    memset(soundex, '0', 4);
    soundex[0] = toupper(name[0]);
    int sIndex = 1, i = 1;
    while(++i < strlen(name) && sIndex < 4){
        if (getSoundexCode(name[i]) != '0' && getSoundexCode(name[i]) != soundex[sIndex - 1]) 
            soundex[sIndex++] = getSoundexCode(name[i]);
    }
    soundex[4] = '\0';
}

#endif // SOUNDEX_H
