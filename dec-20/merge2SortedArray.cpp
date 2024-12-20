#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) 
            merged.push_back(a[i++]);
        else 
            merged.push_back(b[j++]);
    }

    while (i < a.size()) 
        merged.push_back(a[i++]);

    while (j < b.size()) 
        merged.push_back(b[j++]);

    return merged;
}

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};

    vector<int> merged = mergeArrays(a, b);

    cout << "Merged Array: ";
    for (int x : merged) 
        cout << x << " ";
    cout << endl;

    return 0;
}
