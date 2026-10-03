#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int blockSize = sqrt(n);

    int start = 0;
    int end = blockSize - 1;

    // Find the appropriate block
    while (end < n && arr[end] < key) {
        start = end + 1;
        end = end + blockSize;
    }

    if (end >= n)
        end = n - 1;

    // Sequential search within the block
    int pos = -1;

    for (int i = start; i <= end; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at position " << pos + 1 << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}