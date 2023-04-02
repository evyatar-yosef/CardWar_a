#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "player.hpp"

// using namespace ariel;

class Game {
private:
    Player pl1, pl2;

public:
    Game();
    Game(Player pl1, Player pl2);

    void printLastTurn();

    void playTurn(); 

    void playAll(); 

    std::string printWiner() ;
    

    std::string printLog();

    std::string printStats() ;
};

#endif