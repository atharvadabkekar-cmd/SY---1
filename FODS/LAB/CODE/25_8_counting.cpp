// Counting Sort - FODS Lab
#include <iostream>

using namespace std; 

void countingSort(int arr[], int n) {
    if (n <= 0) return;

    
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) max_val = arr[i];
    }
    
   
    int* count = new int[max_val + 1](); 
    int* output = new int[n];

   
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    
    for (int i = 1; i <= max_val; i++) {
        count[i] += count[i - 1];
    }

    
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
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

    
    countingSort(arr, n);

    
    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    

    return 0;
}