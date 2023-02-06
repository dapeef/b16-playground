#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    vector<int> v1(10);
    vector<int> v2(10, 5);

    vector<int> v3 = {1, 2, 3, 4, 5, 10, 50};

    // vector<int> empty;
    // empty.reserve(10);

    // vector<int> empty2(10);

    // empty.push_back(1);
    
    // cout << empty.max_size() << endl;

    vector<int> vect(10);
    int* p = &vect[3];

    cout << *p << endl;

    *p = 100;
    
    vector<int> vect2(10);

    vect2[15] = 69;

    cout << vect2[13];
}