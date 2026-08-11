#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // Duplicate, won't be inserted
    s.insert(40);

    cout << "Elements: ";
    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}