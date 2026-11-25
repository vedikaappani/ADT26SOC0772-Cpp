
#include <iostream>
using namespace std;

// Function Template
template <class T>
T findMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << "Maximum of integers: "
         << findMax(10, 20) << endl;

    cout << "Maximum of float numbers: "
         << findMax(5.5, 2.5) << endl;

    cout << "Maximum of characters: "
         << findMax('A', 'Z') << endl;

    return 0;
}
