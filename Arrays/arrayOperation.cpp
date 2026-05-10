#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter position and value: ";
                cin >> pos >> value;

                for(int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                break;

            case 2:
                cout << "Enter position to delete: ";
                cin >> pos;

                for(int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;

            case 3:
                cout << "Array: ";
                for(int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
        }
    } while(choice != 4);

    return 0;
}
