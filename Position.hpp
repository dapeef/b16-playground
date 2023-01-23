#include <iostream>

class Position {
private:
    double x;
    double y;
    double theta;

public:
    Position(const double x=0, const double y=0, const double theta=0);
    
    void setX(const double x);
    void setY(const double y);
    void setTheta(const double theta);
    
    double getX() const;
    double getY() const;
    double getTheta() const;

    void move(const double dx, const double dy, const double dtheta=0);
    void rotate(const double dtheta);
    void reset();

    std::string ToString() const;
};
