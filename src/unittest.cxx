
#include "Machine.h"
#include "gtest/gtest.h"
#include <string>
using namespace std;

namespace {

// The fixture for testing class Foo.
class MachineTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  MachineTest() {
    // You can do set-up work for each test here.
  }

  virtual ~MachineTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Objects declared here can be used by all tests in the test case for Foo.
};

// Tests that the Foo::Bar() method does Abc.

TEST_F(MachineTest, Logic_1) {
    Machine m;
    ASSERT_TRUE(m.getReport().front().compare("idle")==0);
    ASSERT_TRUE(m.start())
    ASSERT_TRUE(m.getReport().back().compare("in use")==0);
    ASSERT_TRUE(m.stop())
    ASSERT_TRUE(m.getReport().back().compare("idle")==0);
}

TEST_F(MachineTest, Init_Logic) {
    string status = "in use";
    string service = "being serviced"

    std::vector<std::string> = _log;
    _log.push_back(status);
    _log.push_back(service);

    Machine m = Machine(123, _log, status);
    ASSERT_TRUE(m.getReport().back().compare("idle")==0);
}


// Tests that Foo does Xyz.
TEST_F(MachineTest, Logic_2) {
    EXPECT_EQ(0,0);
}

}  // namespace

int main(int argc, char **argv) {
    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    return 0;
}
