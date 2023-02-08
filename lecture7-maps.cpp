#include <iostream>
#include <map>

using namespace std;

template <typename KeyType, typename ValueType>
void PrintMap(map<KeyType, ValueType> m) {
    cout << "Key\tValue" << endl;

    for (auto i = m.begin(); i != m.end(); i++) {
        cout << i->first << "\t" << i->second << endl;
    }
}

int main() {
    map<int, int> map1;

    map1.insert({1, 10});
    map1.insert({2, 20});
    map1.insert({3, 30});

    PrintMap(map1);
}