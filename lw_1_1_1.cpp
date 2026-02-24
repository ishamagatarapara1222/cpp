#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nEven elements of the array: ";
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}