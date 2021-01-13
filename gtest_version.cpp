#include "lib.h"
#include <gtest/gtest.h>

TEST(Version, ValidVersion)
{
    EXPECT_TRUE(version()>0);
    //ASSERT_GT(version(),0);
}
