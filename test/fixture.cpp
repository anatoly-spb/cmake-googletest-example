#include "gtest/gtest.h"

namespace {
class FixtureTest : public ::testing::Test {
 protected:
  void SetUp() override {
  }
  void TearDown() override {}
};
}

TEST_F(FixtureTest, ZeroEqual) {
	ASSERT_EQ(0, 0);
}
TEST_F(FixtureTest, Failure) {
  FAIL();
}