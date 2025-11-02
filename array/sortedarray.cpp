#include <iostream>
using namespace std;

bool sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  
        if (arr[i] > arr[i+1]) {        
            return false;
        }
    }
    return true;
}

int main() {
    int arr[6] = {5, 3, 8, 7, 6, 1};

    if (sorted(arr, 6)) {
        cout << "Array is sorted\n";
    } else {
        cout << "Array is NOT sorted\n";
    }

    return 0;
}
