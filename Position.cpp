#include <iostream>
#include <sstream>
#include "Position.hpp"

Position::Position(const double x, const double y, const double theta) {
    setX(x);
    setY(y);
    setTheta(theta);
}

void Position::setX(const double x) {
    this->x = x;
}
void Position::setY(const double y) {
    this->y = y;
}
void Position::setTheta(const double theta) {
    this->theta = theta;
}

double Position::getX() const {
    return this->x;
}
double Position::getY() const {
    return this->y;
}
double Position::getTheta() const {
    return this->theta;
}

std::string Position::ToString() const {
    std::stringstream ss;

    ss << "x: " << this->x << ", y: " << this->y << ", theta: " << this->theta;

    return ss.str();
}