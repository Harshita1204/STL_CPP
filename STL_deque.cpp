#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(20);
    dq.push_front(10);
    dq.push_back(30);

    cout << dq.front() << endl;  // 10
    cout << dq.back() << endl;   // 30

    dq.pop_front();              // removes 10

    for (int x : dq) cout << x << " ";
    // Output: 20 30
}
