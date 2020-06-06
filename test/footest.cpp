#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "foo/foo.h"

namespace
{
  struct MockBoo : public Boo
  {
    MOCK_METHOD(void, BooMethod, (), (override));
  };

  TEST(FooTest, Simple)
  {
    using ::testing::AtLeast;

    MockBoo boo;
    EXPECT_CALL(boo, BooMethod())
      .Times(AtLeast(1));

    Foo foo;
    foo.CallBooMethod(boo);
  }
}