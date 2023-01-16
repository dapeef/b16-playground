#include <iostream>
#include <vector>
using namespace std;

vector<int> fibonacci(int number) {
    vector<int> result(number);
    int n1 = 1, n2 = 1, n3, i;
    result[0] = n1;
    result[1] = n2;
    for (i = 2; i < number; ++i) {
        n3 = n1 + n2;
        result[i] = n3;
        n1 = n2;
        n2 = n3;
    }
    return result;
}

void print_vector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {
    int number;
    cout << "Enter the number of elements: ";
    cin >> number;
    vector<int> fibo_seq = fibonacci(number);
    print_vector(fibo_seq);
    return 0;
}
