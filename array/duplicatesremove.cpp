#include <iostream>
using namespace std;

int duplicates(int arr[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;    
}

int main() {
    int arr[6] = {1, 1, 2, 2, 4};

    int newSize = duplicates(arr, 6);

    cout << "Unique count = " << newSize << endl;
    cout << "Unique array: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
