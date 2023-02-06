#include <iostream>

using namespace std;

template <typename Type>
Type add_numbers(Type a, Type b) {
    return a + b;
};

template <typename T>
auto mult_numbers(T a, T b) {
    return a * b;
};

// template <typename char>
// string add_numbers(string a, string b) {
//     return a + b;
// }

int main() {
    std::cout << "Sum is " << add_numbers<int>(2, 4) << std::endl;
    std::cout << "Mult is " << mult_numbers<int>(2, 4) << std::endl;

    string a = "ali";
    string b = "balu";

    std::cout << "string is " << add_numbers<string>("a", "b");

    return 0;
}