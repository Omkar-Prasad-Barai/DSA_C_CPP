#include <iostream>
#include <unordered_set>
using namespace std;

void findIntersection(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> s(arr1, arr1 + n1);

    cout << "Intersection: ";
    for (int i = 0; i < n2; i++) {
        if (s.find(arr2[i]) != s.end()) {
            cout << arr2[i] << " ";
            s.erase(arr2[i]);
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findIntersection(arr1, n1, arr2, n2);

    return 0;
}
