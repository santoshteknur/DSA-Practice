#include <iostream>
#include <string>
using namespace std;

void reverseStringRecursive(std::string& str, int start, int end) {
    if (start >= end) {
        return;
    }

    swap(str[start], str[end]);
    reverseStringRecursive(str, start + 1, end - 1);
}
 int main()
 {
  string myString = "Hello, World!";
  reverseStringRecursive(myString, 0, myString.length()-1);
  cout<< "Reverse string : " << myString << endl;
  
  return 0;
  
  }
  

//Using std::reverse:

#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string myString = "Hello, World!";
    std::reverse(myString.begin(), myString.end());
    std::cout << "Reversed String: " << myString << std::endl;

    return 0;
}


//Using a Loop and swap:
#include <iostream>
#include <string>

void reverseStringLoop(std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        std::swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    std::string myString = "Hello, World!";
    reverseStringLoop(myString);
    std::cout << "Reversed String: " << myString << std::endl;

    return 0;
}

		