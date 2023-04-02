#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
// using namespace ariel;


class Player {
   std:: string name;

public:
    Player();
    Player(std:: string name);

    int stacksize(); 
    

   int cardesTaken(); 
    
};

#endif