#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Position {
private:
    double x;
    double y;
    double theta;

public:
    Position(const double x = 0, const double y = 0, const double theta = 0) {
        setX(x);
        setY(y);
        setTheta(theta);
    }
    
    void setX(const double x) {
        this->x = x;
    }
    void setY(const double y) {
        this->y = y;
    }
    void setTheta(const double theta) {
        this->theta = theta;
    }
    
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    double getTheta() const {
        return theta;
    }

    string ToString() const {
        stringstream ss;

        ss << "x: " << this->x << ", y: " << this->y << ", theta: " << this->theta;

        return ss.str();
    }
};

ostream& operator<<(ostream& os, const Position& p) {
    os << p.ToString();

    return os;
}

int main() {
    Position p1;

    cout << p1 << endl;
};