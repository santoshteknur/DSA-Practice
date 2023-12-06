//find K’th Smallest/Largest Element in Unsorted Array | Expected Linear Time


//case 1 nth_element
#include <iostream>
#include <algorithm>

class Solution {
public:
    // QuickSelect algorithm to find the kth smallest element
    int kthSmallest(int arr[], int l, int r, int k) {
        if (k > 0 && k <= r - l + 1)  // 4 <= 4

			{
            // Use std::nth_element to partially sort the array
            std::nth_element(arr + l, arr + l + k - 1, arr + r + 1);

            // Return the kth smallest element
            return arr[l + k - 1];
        }

        // If k is out of bounds, return a sentinel value (for example, -1)
        return -1;
    }
};

int main() {
    int arr[] = {7, 10, 4, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int l = 0;
    int r = n - 1;

    Solution sol;
    std::cout << "K'th smallest element is " << sol.kthSmallest(arr, l, r, k) << std::endl;

    return 0;
}

// case 2 using sorting

#include<algorithm>
#include<iostream>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
 sort(arr, arr + n);
 
 return arr[k-1];
 
 }
 
int kthLargest(int arr[], int n, int k)
{
 std::sort(arr, arr + n, std::greater<int>());
 
 return arr[k-1];
}

int main()
{
  int arr[] = {12, 3, 5, 7, 19}; //3,5,7,12,19
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    std::cout << "K'th smallest element is " << kthSmallest(arr, n, k) << std::endl;
    std::cout << "K'th largest element is " << kthLargest(arr, n, k) << std::endl;

    return 0;
}


