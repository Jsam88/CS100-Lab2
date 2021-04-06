#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, NumString) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "88";
    EXPECT_EQ("88", echo(2, test_val));
}

TEST(EchoTest, SpecialChar) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "@";
    EXPECT_EQ("@", echo(2, test_val));
}

TEST(EchoTest, MultiString ) {
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "Multi"; test_val[2] = "string"; test_val[3] = "test"; test_val[4] = "woohoo.";
    EXPECT_EQ("Multi string test woohoo.", echo(5, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
