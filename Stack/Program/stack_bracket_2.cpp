#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string exp) {
    stack<char> s;
    for (char c : exp) {
        if (c == '(') s.push(')');
        else if (c == '[') s.push(']');
        else if (c == '{') s.push('}');
        else if (s.empty() || c != s.top()) return false;
        else s.pop();
    }
    return s.empty();
}

int main() {
    string expression;
    cout << "Enter an expression with parentheses: ";
    cin >> expression;

    if (isBalanced(expression)) cout << "Balanced parentheses." << endl;
    else cout << "Unbalanced parentheses." << endl;

    return 0;
}
