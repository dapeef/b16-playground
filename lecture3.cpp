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

    p1.move(59, 69, 79);

    cout << p1 << endl;
};
