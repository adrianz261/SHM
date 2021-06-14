#pragma once

#include <vector>
#include <string>

class Ship
{
    int id_ = -1;
    std::string name_ = "";
    unsigned int speed_ = 0;
    unsigned int maxCrew_ = 0;
    unsigned int capacity_ = 0;

public:
    Ship::Ship();
    Ship::Ship(int id, unsigned int speed, unsigned int maxCrew);
    Ship::Ship(int id, const std::string& name, unsigned int speed, unsigned int maxCrew, unsigned int capacity);

    void setName(const std::string& name);
};