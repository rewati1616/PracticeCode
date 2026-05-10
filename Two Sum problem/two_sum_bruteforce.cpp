#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Indices: " << i << ", " << j;
                return 0;
            }
        }
    }

    cout << "No solution found";
    return 0;
}
