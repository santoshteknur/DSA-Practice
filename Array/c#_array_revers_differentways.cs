

//case 1 usng for loop

using System;

class Program
{
    static void Main()
    {
        int[] arr = { 1, 2, 3 };

        for (int i = arr.Length - 1; i >= 0; i--)
        {
            int temp = arr[i];
            Console.WriteLine(temp);
        }
    }
}

//Case 2 array reverse method

class Program
{
	static void Main()
	{
		int[] numb = {1,2,3,4,5};
		Array.Reverse(numb);
   }
}
	
	
//Case 3 Linq
using Array;
int[] arr = {1,3,4,5,6};
arr = arr.Reverse.ToArray();


//Case 4 recursion

using System;

class Program
{
    static void Main()
    {
        int[] numbers = { 1, 2, 3, 4, 5 };
        
        Console.WriteLine("Original array:");
        PrintArray(numbers);

        ReverseArrayRecursive(numbers, 0, numbers.Length - 1);

        Console.WriteLine("\nReversed array using recursion:");
        PrintArray(numbers);
    }

    static void ReverseArrayRecursive(int[] arr, int start, int end)
    {
        if (start < end)
        {
            // Swap the elements at start and end indices
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            // Recursively reverse the remaining elements
            ReverseArrayRecursive(arr, start + 1, end - 1);
        }
    }

    static void PrintArray(int[] arr)
    {
        foreach (var num in arr)
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();
    }
}
