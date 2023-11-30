#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reversestring(string& input)
{
 stack<char> stk;
 for(char c: input)
 {
  stk.push(c);
 }
 
 string reversed;
 while(!stk.empty())
 {
 reversed += stk.top();
 stk.pop();
 }
 
 return reversed;
 }
 int main(){
  string input= "Hello, world";
  string reversed= reversestring(input);
  cout<<"Reverse string = "<< reversed <<endl;
 }