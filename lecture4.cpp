#include <iostream>

using namespace std;

class Edge {
private:
    string target;

public:
    Edge(const string &_target) : target(_target) {}

    Edge(const string &_target) {
        this->target = _target;
    }
    
    virtual void Execute() const = 0;
};

class DoorEdge : public Edge {

};