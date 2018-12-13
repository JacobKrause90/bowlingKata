//
// Created by jacobkrause on 12/12/2018.
//

#include "game.h"

void Game::roll(int frame)
{
    //if(currentRoll == 0)
    rolls[currentRoll] = frame;
    currentRoll++;
    //score += frame;
}

int Game::scoreGame()
{
    int score = 0;
    int rollNum = 0;
    // 10 scores per game
    for(int frame = 0; frame < 10; frame++)
    {
        if(rolls[rollNum] == 10)
        {
            score += rolls[rollNum] + rolls[rollNum + 1] + rolls[rollNum + 2];
            rollNum += 1;
        }
        else if(isSpare(rollNum))
        {
            score += 10 + rolls[rollNum + 2];
            rollNum += 2;
        }
        else
        {
            score += rolls[rollNum] + rolls[rollNum + 1];
            rollNum += 2;
        }
    }
    return score;
}

bool Game::isSpare(int frameIndex)
{
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10;
}

Game::Game()
{
    currentRoll = 0;
    rolls.fill(0);
}
