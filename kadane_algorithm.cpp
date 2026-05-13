#include <iostream>
#include <climits>
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

    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < n; i++) {
        currentSum += arr[i];

        if(currentSum > maxSum) {
            maxSum = currentSum;
        }

        if(currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum;

    return 0;
}
