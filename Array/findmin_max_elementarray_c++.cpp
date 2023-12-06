
// find the max and min number from an array

//case 1

//Input: arr[] = {3, 5, 4, 1, 9}
//Output: Minimum element is: 1
//Maximum element is: 9
			  
#include <utility> // For std::pair
#include <climits> // For INT_MAX and INT_MIN
std::pair<long long, long long> getMinMax(long long a[], int n) {
    long long minElement = a[0];
    long long maxElement = n-1;
    for (int i = 0; i < n; ++i) {
        if (a[i] < minElement) {
            minElement = a[i];
        }
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
    }
    return std::make_pair(minElement, maxElement);
}

int main() {
    long long arr[] = {3, 1, 9, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::pair<long long, long long> result = getMinMax(arr, n);

    long long minValue = result.first;
    long long maxValue = result.second;

    // Output the results
    std::cout << "Minimum Value: " << minValue << std::endl;
    std::cout << "Maximum Value: " << maxValue << std::endl;

    return 0;
}



// Case  2 Using std::min_element and std::max_element from <algorithm>
#include <algorithm>
#include <iostream>

int main() {
    int arr[] = {3, 1, 9, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    auto minElement = std::min_element(arr, arr + n);
    auto maxElement = std::max_element(arr, arr + n);

    std::cout << "Minimum Element: " << *minElement << std::endl;
    std::cout << "Maximum Element: " << *maxElement << std::endl;

    return 0;
}


// case 3
 #include <iostream>

int main() {
    int arr[] = {3, 1, 9, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minValue = arr[0];
    int maxValue = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    std::cout << "Minimum Element: " << minValue << std::endl;
    std::cout << "Maximum Element: " << maxValue << std::endl;

    return 0;
}


