
//case 1 recursion

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int arr[] = {1,3,4,5,7,};
 int size = sizeof(arr)/ sizeof(arr[0]);
 
 reverse(arr, arr+size);
 
 for(int i=0; i<size; i++)
 {
  cout << arr[i] << " ";
 }
 
 return 0;
}

// Case 2 swap

#include <iostream>
using namespace std;

void Reversearr(int arr[], int start, int end)
{
 if(start < end) {
 swap(arr[start], arr[end]);
 Reversearr(arr, start+1, end-1);
 }
}
int main()
{
    int arr[] = {1,3,5,6,7,9};
	int size = sizeof(arr)/ sizeof(arr[0]);
	
	Reversearr(arr, 0, size-1);
	 for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
	
	return 0;
}

//case 3 

#include<iostream>
void ReverseArray( int arr[], int size)
{ 
	int *start = arr;
	int *end = arr + size -1;
	
	while(start <end)
	{
		swap(*start, *end);
		start++; end--;
	}
	
}

int main()
{
 int arr[] = { 1,3,4,5,6};
 int size = sizeof(arr} / sizeof(arr[0]);
 
 ReverseArray(arr, size);
 
  for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

  return 0;
  
}


//case 4 
#include <iostream>
#include <string>
using namespace std;

string reverseWord(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
}

int main() {
    // Example usage:
    string s = "for";
    string result = reverseWord(s);

    cout << result << endl;

    return 0;
}

	