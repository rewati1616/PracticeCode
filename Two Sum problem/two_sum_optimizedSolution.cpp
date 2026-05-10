#include <iostream>
#include <unordered_map>
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

    unordered_map<int, int> mp; // value -> index

    for(int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if(mp.find(complement) != mp.end()) {
            cout << "Indices: " << mp[complement] << ", " << i;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No solution found";
    return 0;
}
