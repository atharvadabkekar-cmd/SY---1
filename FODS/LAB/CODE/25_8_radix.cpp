#include <iostream>
using namespace std;

 
void countingSortForRadix(int arr[], int n, int exp) {
    
    int* output = new int[n];
    
    
    int count[10] = {0}; 


    for (int i = 0; i < n; i++) {
        int index = (arr[i] / exp) % 10;
        count[index]++;
    }

    
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    
    for (int i = n - 1; i >= 0; i--) {
        int index = (arr[i] / exp) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    
    
}


void radixSort(int arr[], int n) {
    if (n <= 0) return;

    
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) max_val = arr[i];
    }


    
    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        countingSortForRadix(arr, n, exp);
    }
}

int main() {
    int n;
    

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }


    int* arr = new int[n];

    
    cout << "Enter " << n << " non-negative integers separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";


    radixSort(arr, n);

    
    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}