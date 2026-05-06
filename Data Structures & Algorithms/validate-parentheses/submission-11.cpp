#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> pairs = {{')','('}, {']','['}, {'}','{'}};
        stack<char> stackS;

        for (auto& str : s){
            if (str == '(' || str == '{' || str == '['){
                stackS.push(str);
            }
            else {
                if (stackS.empty()){
                    return false;
                }
                if (pairs[str] != stackS.top()){
                    return false;
                }

                stackS.pop();
            }
        }

        return stackS.empty();
        
    }
};
