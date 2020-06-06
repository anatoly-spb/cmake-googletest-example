#include "gtest/gtest.h"

TEST(SimpleTest, FatalFailure) {
  ASSERT_TRUE(true);
  ASSERT_TRUE(false);
}

TEST(SimpleTest, NonFatalFailure) {
  EXPECT_TRUE(false);
  EXPECT_TRUE(true);
}


