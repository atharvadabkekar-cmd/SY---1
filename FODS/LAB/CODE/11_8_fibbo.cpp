#include <iostream>
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

    int fib2 = 0;
    int fib1 = 1;
    int fib = fib1 + fib2;

  
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }

    int offset = -1;

    while (fib > 1) {
        int i = min(offset + fib2, n - 1);

        if (arr[i] < key) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > key) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else {
            cout << "Element found at position " << i + 1 << endl;
            return 0;
        }
    }

    if (fib1 && offset + 1 < n && arr[offset + 1] == key) {
        cout << "Element found at position " << offset + 2 << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}