#include <iostream>
#include <sstream>
#include "Position.hpp"

Position::Position(const double x, const double y, const double theta) {
    SetX(x);
    SetY(y);
    SetTheta(theta);
}

void Position::SetX(const double x) {
    this->x = x;
}
void Position::SetY(const double y) {
    this->y = y;
}
void Position::SetTheta(const double theta) {
    this->theta = theta;
}

double Position::GetX() const {
    return this->x;
}
double Position::GetY() const {
    return this->y;
}
double Position::GetTheta() const {
    return this->theta;
}

void Position::Move(const double dx, const double dy, const double dtheta) {
    this->x += dx;
    this->y += dy;
    this->theta += dtheta;
}
void Position::Rotate(const double dtheta) {
    this->Move(0, 0, dtheta);
}
void Position::Reset() {
    this->x = 0;
    this->y = 0;
    this->theta = 0;
}

std::string Position::ToString() const {
    std::stringstream ss;

    ss << "x: " << this->x << ", y: " << this->y << ", theta: " << this->theta;

    return ss.str();
}
