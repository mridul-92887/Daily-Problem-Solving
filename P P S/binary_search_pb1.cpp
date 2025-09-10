#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& array, int target) {
    int start = 0;
    int end = array.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> array(N);
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    while (Q--) {
        int X;
        cin >> X;

        if (binarySearch(array, X) != -1) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
