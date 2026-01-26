#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> a = {1, 2, 3, 4, 5};

    cout << a.size() << endl;     // 5
    cout << a.front() << endl;   // 1
    cout << a.back() << endl;    // 5

    a.fill(10);
    for (int x : a) cout << x << " ";
    // Output: 10 10 10 10 10 
}
