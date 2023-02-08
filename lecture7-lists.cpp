#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename V>
void PrintVec(V vec) {
    typename V::iterator i;

    for (i = vec.begin(); i != vec.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    list<int> l = {1, 2, 3, 4, 5, 10, 50};

    PrintVec<list<int>>(l);

    list<int>::iterator i = l.begin();

    
}