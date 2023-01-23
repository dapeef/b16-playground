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
    Position p1;

    cout << p1 << endl;
};
