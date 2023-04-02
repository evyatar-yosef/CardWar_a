#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "player.hpp"


Player::Player() {}

Player:: Player(std:: string name)
    {
        this->name = name;
    }


int Player:: stacksize()
{
    return 1;
}
int Player :: cardesTaken()
{
    return 1;
}

