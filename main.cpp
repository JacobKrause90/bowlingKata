#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "game.h"

TEST_CASE("Does the Game exist","[score]")
{
    //Arrange
    Game *g = new Game;
    bool exist = true;
    //Act

    //Assert
    REQUIRE(g != NULL);
}