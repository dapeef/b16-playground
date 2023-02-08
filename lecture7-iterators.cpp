#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void PrintVec(vector<T> vec) {
    vector<int>::iterator i;

    for (i = vec.begin(); i != vec.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 10, 50};

    PrintVec(v);

    vector<int>::iterator i = v.begin();

    
}