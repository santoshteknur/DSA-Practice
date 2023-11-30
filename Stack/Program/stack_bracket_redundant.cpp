#include <iostream>
#include <stack>
#include <string>

bool hasRedundantBrackets(const std::string &expression) {
    std::stack<char> charStack;

    for (char c : expression) {
        if (c != ')') {
            charStack.push(c);
        } else {
            bool hasOperators = false;
            while (!charStack.empty() && charStack.top() != '(') {
                if (charStack.top() == '+' || charStack.top() == '-' || charStack.top() == '*' || charStack.top() == '/') {
                    hasOperators = true;
                }
                charStack.pop();
            }
            charStack.pop(); // Pop the opening bracket

            if (!hasOperators) {
                return true; // Redundant brackets found  ((a+b)) --> ((a+b   -->
            }
        }
    }

    return false; // No redundant brackets found
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character

    while (n--) {
        std::string expression;
        std::getline(std::cin, expression);

        if (hasRedundantBrackets(expression)) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}
