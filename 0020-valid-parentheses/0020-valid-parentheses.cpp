class Solution {
public:
    char opp(char c){
        switch(c){
            case ')':
                return '(';
            case '}':
                return '{';
            case ']':
                return '[';

            default:
                return c;
        }
        return c;
    }
    bool isValid(string s) {
        stack<char> pt;
        char* ptr = &(s[0]);
        pt.push(*ptr);
        ptr+=1;
        while((*ptr)!='\0'){
            char c = *ptr;
            char l = opp(c);
            if(!pt.empty()){
                if(l!=c && pt.top()==l){
                    pt.pop();
                }
                else{
                    pt.push(c);
                }
            }
            else{
                pt.push(c);
            }
            ptr+=1;
        }
        if(pt.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};