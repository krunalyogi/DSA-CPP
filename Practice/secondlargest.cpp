#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> v = {7, 4, 9, 2, 5, 9, 1};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < v.size(); i++) {

        if (v[i] > largest) {
            secondLargest = largest;
            largest = v[i];
        }
        else if (v[i] > secondLargest && v[i] != largest) {
            secondLargest = v[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest distinct element found.";
    } else {
        cout << "Largest: " << largest << endl;
        cout << "Second Largest: " << secondLargest << endl;
    }

    return 0;
}