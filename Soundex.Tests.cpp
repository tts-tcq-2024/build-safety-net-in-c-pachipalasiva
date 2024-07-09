#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
 generateSoundex("@$%j", soundex);
 ASSERT_EQ(soundex,"@200");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_1) {
 //AAA
 char soundex[5];
 generateSoundex("Adams", soundex);
 ASSERT_EQ(soundex,"A352");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_2) {
 //AAA
  char soundex[5];
 generateSoundex("@@gty", soundex);
 ASSERT_EQ(soundex,"@230");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_vowels) {
 //AAA
 char soundex[5];
 generateSoundex("aeiou", soundex);
 ASSERT_EQ(soundex,"A000");
}

