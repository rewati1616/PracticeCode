#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
        cout << "Array is sorted";
    } else {
        cout << "Array is NOT sorted";
    }

    return 0;
}
