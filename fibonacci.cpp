#include <iostream>
#include <vector>

using namespace std;


vector<int> fibonacci(int n) {
    vector<int> fibs(n, 1);

    if (n > 1) {
        for (int i = 2; i < n; i ++) {
            fibs[i] = fibs[i-1] + fibs[i-2];
        }
    }

    return fibs;
}

void fillonacci(vector<int>* p_fibs) {
    if (p_fibs->size() == 1) {
        (*p_fibs)[0] = 1;
    } else if (p_fibs->size() > 1)
    {
        (*p_fibs)[0] = 1;
        (*p_fibs)[1] = 1;

        for (int i = 2; i < p_fibs->size(); i ++) {
            (*p_fibs)[i] = (*p_fibs)[i-1] + (*p_fibs)[i-2];
        }
    }
}

void print_vec(vector<int> vec) {
    if (vec.size() == 0) {
        cout << "[]" << endl;
    } else {
        cout << "[" << vec[0];

        for (int i = 1; i < vec.size(); i++)
        {
            cout << ", " << vec[i];
        }

        cout << "]" << endl;
    }
}

void print_vec(const vector<int>* p_vec) {
    vector<int> vec = *p_vec;

    if (vec.size() == 0) {
        cout << "[]" << endl;
    } else {
        cout << "[" << vec[0];

        for (int i = 1; i < vec.size(); i++)
        {
            cout << ", " << vec[i];
        }

        cout << "]" << endl;
    }
}


int main() {
    int num;

    cout << "How many brev? ";
    cin >> num;

    vector<int> fibs = fibonacci(num);
    cout << "Returned: ";
    print_vec(fibs);

    vector<int> fills(num);
    fillonacci(&fills);
    cout << "Filled: ";
    print_vec(fills);
}