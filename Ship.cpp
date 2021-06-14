#include "Ship.hpp"

Ship::Ship() = default;

Ship::Ship(int id, const std::string& name, unsigned int speed, unsigned int maxCrew, unsigned int capacity)
    : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
{

}

Ship::Ship(int id, unsigned int speed, unsigned int maxCrew)
    : Ship(id, "", speed, maxCrew, 1)
{

}

void Ship::setName(const std::string& name)
{
    name_ = name;
}