#include <iostream>

class Position {
private:
    double x;
    double y;
    double theta;

public:
    Position(const double x = 0, const double y = 0, const double theta = 0);
    
    void setX(const double x);
    void setY(const double y);
    void setTheta(const double theta);
    
    double getX() const;
    double getY() const;
    double getTheta() const;

    std::string ToString() const;
};

// std::ostream& operator<<(std::ostream& os, const Position& p) {
//     os << p.ToString();

//     return os;
// }