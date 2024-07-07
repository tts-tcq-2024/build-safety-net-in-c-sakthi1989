#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
 generateSoundex("sakthi", soundex);
 generateSoundex("hhow", soundex);
 generateSoundex("are", soundex);
 generateSoundex("yyou", soundex);
 
 // ASSERT_EQ(soundex,"A200");
}
