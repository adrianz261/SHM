#pragma once

#include <vector>
#include <string>

class Ship
{
    int id_ = -1;
    std::string name_ = "";
    size_t speed_ = 0;
    size_t maxCrew_ = 0;
    size_t crew_ = 0;
    size_t capacity_ = 0;

public:
    Ship() = default;
    Ship(int id, size_t speed, size_t maxCrew);
    Ship(int id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity);

    void setName(const std::string& name);

    Ship& operator+=(const int crew);
    Ship& operator-=(const int crew);
};