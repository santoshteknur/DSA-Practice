// C# program to put all negative 
// numbers before positive numbers 
using System; 

class GFG { 
	static void rearrange(int[] arr, int n) 
	{ 

		int j = 0, temp; 
		for (int i = 0; i < n; i++) { 
			if (arr[i] < 0) { 
				temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
				j++; 
			} 
		} 
	} 

	// A utility function to print an array 
	static void printArray(int[] arr, int n) 
	{ 
		for (int i = 0; i < n; i++) 
			Console.Write(arr[i] + " "); 
	} 

	// Driver code 
	public static void Main() 
	{ 
		int[] arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 }; 
		int n = arr.Length; 

		rearrange(arr, n); 
		printArray(arr, n); 
	} 
} 



//case 2
using System; 
using System.Collections; 
public class santosh { 
	
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

	