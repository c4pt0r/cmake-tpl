#include <gtest/gtest.h>
#include "foo.h"

TEST(FooTests, FooTest) {
	EXPECT_EQ(foo(), 1);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

