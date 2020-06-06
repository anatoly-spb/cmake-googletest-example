#include "gtest/gtest.h"

TEST(SimpleTest, FatalFailureMacros) {
  ASSERT_TRUE(true);
}

TEST(SimpleTest, NonFatalFailureMacros) {
  EXPECT_TRUE(true);
}


