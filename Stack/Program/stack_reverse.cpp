// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<stack>
using namespace std;
void reverseString(string &str) {
    stack<int> stk;
 
    for (char ch: str) stk.push(ch);
 
    for (int i = 0; i < str.length(); i++) {
        str[i] = stk.top();
        stk.pop();
    }
}
int main() {
   string str = "hi-educative";
    cout << "Original String - " << str << endl;
    reverseString(str);
    cout << "Reversed String - " << str;
    return 0;
}