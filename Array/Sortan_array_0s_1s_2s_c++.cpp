
//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
// case 1

#include <iostream>
using namespace std;

class Solution {
public:
    void sort012(int arr[], int n) {
        int low = 0, mid = 0, high = n - 1;
       while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            } else if (arr[mid] == 1) {
                mid++;
            } else {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }

    void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution s;
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    s.printArray(arr, n);

    s.sort012(arr, n);

    cout << "Sorted array: ";
    s.printArray(arr, n);

    return 0;
}





//case 2

#include <iostream>
using namespace std;

class Solution {
public:
    void sort012(int arr[], int n) {
        int count0 = 0, count1 = 0, count2 = 0;

        // Count the occurrences of 0s, 1s, and 2s
        for (int i = 0; i < n; i++) {
            switch (arr[i]) {
                case 0:
                    count0++;
                    break;
                case 1:
                    count1++;
                    break;
                case 2:
                    count2++;
                    break;
            }
        }

        // Reconstruct the array with the correct counts
        int i = 0;

        while (count0 > 0) {
            arr[i++] = 0;
            count0--;
        }

        while (count1 > 0) {
            arr[i++] = 1;
            count1--;
        }

        while (count2 > 0) {
            arr[i++] = 2;
            count2--;
        }
    }

    void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution s;
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    s.printArray(arr, n);

    s.sort012(arr, n);

    cout << "Sorted array: ";
    s.printArray(arr, n);

    return 0;
}


// case 3


