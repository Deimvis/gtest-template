#include <iostream>
#include <gtest/gtest.h>

#include "helpers.hpp"

class HelloWorldTest : public testing::Test {
  protected:
    void SetUp() override {
      answer = new int(42);
    }

    void TearDown() override {
      // will be called even in presence of fatal error
      std::cout << "DEBUG: HelloWorldTest.TearDown()" << std::endl;
      delete answer;
    }

    int* answer;
};

TEST_F(HelloWorldTest, Simple) {
  EXPECT_NO_THROW(hello_world(/*enable=*/true));
  EXPECT_THROW(hello_world(/*enable=*/false), std::runtime_error);
}

TEST(SumTest, Simple) {
  EXPECT_EQ(sum(2, 2), 4);
  EXPECT_DOUBLE_EQ(sum(2, 0.5), 2.5);
}

TEST(Sum2Test, Simple) {
  EXPECT_EQ(sum2(2, 2), 4);
  EXPECT_DOUBLE_EQ(sum2(2, 0.5), 2.5);
}
