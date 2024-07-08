#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("@$%j", soundex);
 ASSERT_EQ(soundex,"A200");
 generateSoundex("Adams", soundex);
 ASSERT_EQ(soundex,"A352");
  generateSoundex("Aeiou", soundex);
 ASSERT_EQ(soundex,"A000");
 generateSoundex("@@gty", soundex);
 ASSERT_EQ(soundex,"@230");
 
 
}
