//#define CONFIG_CATCH_MAIN

#include "mainClass.h"
/*#include "catch.hpp"
TEST_CASE("mainClass") {
    Game g;
    REQUIRE( g.getNumberOfPlayers() == 1);
}*/
#include <gtest/gtest.h>
 
TEST(MainClassTest, PositiveNos) { 
	Game g;
    ASSERT_EQ(0, g.getNumberOfPlayers());
}
 
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

