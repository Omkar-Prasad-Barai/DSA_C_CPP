#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, res = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            res = mid;
            high = mid - 1; // Keep searching in left part
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return res;
}

int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, res = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            res = mid;
            low = mid + 1; // Keep searching in right part
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return res;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    cout << "First occurrence: " << firstOccurrence(arr, n, key) << endl;
    cout << "Last occurrence: " << lastOccurrence(arr, n, key) << endl;

    return 0;
}
