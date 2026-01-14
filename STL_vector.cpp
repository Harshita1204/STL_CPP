#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << v.size() << endl;     // 3
    cout << v.front() << endl;   // 10
    cout << v.back() << endl;    // 30

    v.pop_back();                // removes 30

    for (int x : v) cout << x << " ";
    // Output: 10 20
}
