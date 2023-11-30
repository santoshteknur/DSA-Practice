#include <iostream>
#include <string>
#include <stack>

std::string makeGood(std::string s) {
    std::stack<char> charStack;

    for (char c : s) {
        if (!charStack.empty() && abs(c - charStack.top()) == 32) {
            charStack.pop();
        } else {
            charStack.push(c);
        }
    }

    std::string result = "";
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }

    return result;
}

int main() {
    std::string s1 = "leEeetcode";
    std::string s2 = "abBAcC";
    std::string s3 = "s";

    std::cout << makeGood(s1) << std::endl;  // Output: "leetcode"
    std::cout << makeGood(s2) << std::endl;  // Output: ""
    std::cout << makeGood(s3) << std::endl;  // Output: "s"

    return 0;
}
