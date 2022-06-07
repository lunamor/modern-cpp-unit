class Soundex {
};

#include <gtest/gtest.h>
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord) {
    Soundex soundex;
}


TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord2) {
    const auto expected = 0;
    const auto actual = 0;
    ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

