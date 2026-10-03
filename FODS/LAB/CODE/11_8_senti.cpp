#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n + 1];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

   
    arr[n] = key;

    int i = 0;

    while (arr[i] != key) {
        i++;
    }

    if (i < n)
        cout << "Element found at position " << i + 1 << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}