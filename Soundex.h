#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <ctype.h>
#include <string.h>
void generateSoundex(const char *name, char *soundex){
    char mappings[] = "01230120022455012623010202";
    memset(soundex, '0', 4);
    soundex[0] = toupper(name[0]);
    int sIndex = 1, i = 1;
    while(++i < strlen(name) && sIndex < 4){
        char c = toupper(name[i]) - 65;
        if (mappings[c] != '0' && mappings[c] != soundex[sIndex - 1]) 
            soundex[sIndex++] = mappings[c];
    }
    soundex[4] = '\0';
}

#endif // SOUNDEX_H
