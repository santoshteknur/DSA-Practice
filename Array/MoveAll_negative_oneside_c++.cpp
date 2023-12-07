

// C# program to move all negative numbers to the 
// beginning and all positive numbers to the end with 
// constant extra space 
using System; 

// case 1
using System.Collections; 
public class Gfg { 
	
	public static void move(int[] arr) 
	{ 
		Array.Sort(arr); 
	} 

	// Driver code 
	public static void Main() 
	{ 
		int[] arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 }; 
		move(arr); 
		foreach (int e in arr) 
			Console.Write(e + " "); 
	} 
} 

// case 2

#include <iostream>
#include <algorithm>
using namespace std;

  void swap(int &a, int &b)
   {
       int temp = a;
        a=b;
        b=temp;
   }
   
   void reArrange(int arr[], int n)
   {
       int low=0, high=n-1;
       while(low<high)
       {
           if(arr[low]<0)
           {
               low++;
           }
           else if(arr[high]>0)
           {
               high--;
           }
           else
           swap(arr[low], arr[high]);
           
       }
   }

void displayArray(int arr[],int n){ 
  for(int i=0;i<n;i++){ 
    cout<<arr[i]<<" "; 
  } 
  cout<<endl; 
} 

int main() { 
    // Data 
    int arr[] = {1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1}; 
      int n = sizeof(arr)/sizeof(arr[0]); 
      reArrange(arr,n); 
    displayArray(arr,n); 
    return 0; 
} 