/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
 determine if the input string is valid.

An input string is valid if:
1)Open brackets must be closed by the same type of brackets.
2)Open brackets must be closed in the correct order.*/

class Solution{
public:

    bool isValid(string s){
    int n = s.length();
    stack<char>ss;
    for(int i=0; i<n; i++){
        if(ss.empty()){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')ss.push(s[i]);
            else return false;
        }
        else if(s[i] == '(' || s[i] == '{' || s[i] == '[')ss.push(s[i]);
        else{
            if(ss.top() == '(' && s[i]==')')ss.pop();
            if(ss.top() == '[' && s[i]==']')ss.pop();
            if(ss.top() == '{' && s[i]=='}')ss.pop();
            else return false;
        }
    }
    if(ss.size() == 0)
        return true;
        return false;
    }
};