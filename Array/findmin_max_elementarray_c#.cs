//using c# find min and max element from array

//case 1

using System;
using System.Linq;

class Program {
    static void Main() {
        int[] arr = { 3, 1, 9, 7, 5 };

        int minValue = arr.Min();
        int maxValue = arr.Max();

        Console.WriteLine($"Minimum Element: {minValue}");
        Console.WriteLine($"Maximum Element: {maxValue}");
    }
}


//case 2

using System;

class Program {
    static void Main() {
        int[] arr = { 3, 1, 9, 7, 5 };

        int minValue = arr[0];
        int maxValue = arr[0];

        for (int i = 1; i < arr.Length; i++) {
            if (arr[i] < minValue) {
                minValue = arr[i];
            }
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }

        Console.WriteLine($"Minimum Element: {minValue}");
        Console.WriteLine($"Maximum Element: {maxValue}");
    }
}


// case 3

