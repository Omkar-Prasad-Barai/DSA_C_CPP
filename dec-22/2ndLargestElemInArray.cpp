#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest = -1, secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);

    if (result != -1)
        cout << "Second largest element is " << result << endl;
    else
        cout << "No second largest element found." << endl;

    return 0;
}
