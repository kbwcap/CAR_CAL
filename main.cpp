#include "gmock/gmock.h"


class Cal {
public:
	int getZogop(int a) const {
		return a * a;
	}

	int getMinus(int a, int b) const {
		return a - b;
	}
};

TEST(t1, t2) {
	Cal *calculator = new Cal();

	EXPECT_EQ(1, 1);
	EXPECT_EQ(9, calculator->getZogop(3));
	EXPECT_EQ(1, calculator->getMinus(5, 4));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}