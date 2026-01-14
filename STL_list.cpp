#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(20);
    l.push_front(10);
    l.push_back(30);

    l.remove(20);                // removes 20

    for (int x : l) cout << x << " ";
    // Output: 10 30
}
