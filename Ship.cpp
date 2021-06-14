#include "Ship.hpp"


Ship::Ship(int id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity)
    : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
{

}

Ship::Ship(int id, size_t speed, size_t maxCrew)
    : Ship(id, "", speed, maxCrew, 1)
{

}

void Ship::setName(const std::string& name)
{
    name_ = name;
}

Ship& Ship::operator+=(const int crew)
{
    if (crew > 0)
    {
        crew_ += crew;
    }
    return *this;
}
Ship& Ship::operator-=(const int crew)
{
    if (crew > 0)
    {
        crew_ -= crew;
    }
    return *this;
}