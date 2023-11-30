#include <iostream>
#include <string>
#include <stack>
using namespace std;
string removeDuplicates(const std::string& s) {
    std::stack<char> charStack;

    for (char c : s) {
        if (!charStack.empty() && c == charStack.top()) {
            charStack.pop(); // Remove the top character from the stack
        } else {
            charStack.push(c); // Push the current character onto the stack
        }
    }

    string result;
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string result = removeDuplicates(input);
    cout << "String after removing adjacent duplicates: " << result << endl;
    return 0;
}
