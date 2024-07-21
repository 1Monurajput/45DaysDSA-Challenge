class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(auto it:s){
            if(it==')' || it ==']' || it == '}'){
                if(stk.empty()) return false;
                if(it==')'){
                    if(stk.top()!='(') return false;
                    stk.pop();
                }
                else if(it==']'){
                    if(stk.top()!='[') return false;
                    stk.pop();
                }
                else if(it=='}'){
                    if(stk.top()!='{') return false;
                    stk.pop();
                }
            }
            else{
                stk.push(it);
            }
        }
        if(!stk.empty()) return false;
        return true;
    }
};