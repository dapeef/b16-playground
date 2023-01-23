#include <iostream>

class Position {
private:
    double x;
    double y;
    double theta;

public:
    Position(const double x=0, const double y=0, const double theta=0);
    
    void SetX(const double x);
    void SetY(const double y);
    void SetTheta(const double theta);

    double GetX() const;
    double GetY() const;
    double GetTheta() const;

    void Move(const double dx, const double dy, const double dtheta=0);
    void Rotate(const double dtheta);
    void Reset();

    std::string ToString() const;
};
