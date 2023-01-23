#include <iostream>
#include <sstream>
#include <vector>
#include "Position.hpp"

using namespace std;

std::ostream& operator<<(std::ostream& os, const Position& p) {
    os << p.ToString();

    return os;
}

int main() {
    Position p1(10, 10, 10);

    cout << "Move" << endl;
    p1.move(59, 69, 79);
    p1.move(10, 10);
    cout << p1 << endl;

    cout << "Reset" << endl;
    p1.reset();
    cout << p1 << endl;

    cout << "Rotate" << endl;
    p1.rotate(100);
    cout << p1 << endl;
};
