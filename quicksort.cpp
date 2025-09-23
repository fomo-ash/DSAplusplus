#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // choose first element as pivot
    int l = low;
    int h = high;

    while (l < h) {
        // move l to the right until arr[l] > pivot
        while (arr[l] <= pivot && l < high) {
            l++;
        }

        // move h to the left until arr[h] <= pivot
        while (arr[h] > pivot && h > low) {
            h--;
        }

        // swap only if they haven't crossed
        if (l < h) {
            swap(arr[l], arr[h]);
        }
    }

    // place pivot in correct position
    swap(arr[low], arr[h]);
    return h; // pivot index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // left subarray
        quickSort(arr, pi + 1, high); // right subarray
    }
}

int main() {
    int arr[] = {2, 1, 5, 4, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
