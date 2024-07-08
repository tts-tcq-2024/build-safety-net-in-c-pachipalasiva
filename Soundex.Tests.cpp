#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 ASSERT_EQ(soundex,"A200");
 generateSoundex("Adams", soundex);
 ASSERT_EQ(soundex,"A352");
  generateSoundex("Adams", soundex);
 ASSERT_EQ(soundex,"Aeiou",A000);
 
}
