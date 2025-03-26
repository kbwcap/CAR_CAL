#include "gmock/gmock.h"

class Cal {
 public:
  int getDivide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
  }
  int getSumSum(int a, int b, int c) { return a + b + c; }
};

TEST(t1, t2) {
  Cal a;
  EXPECT_EQ(1, 1);
  EXPECT_EQ(a.getDivide(10, 5), 2);
  EXPECT_EQ(a.getSumSum(1, 2, 3), 6);
}

int main() {
  ::testing::InitGoogleMock();
  return RUN_ALL_TESTS();
}