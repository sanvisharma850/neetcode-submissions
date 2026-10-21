class Solution {
public:
    bool isValid(string s) {
        char stack[100]; int top=-1;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                stack[++top]=ch;
            }else{
                if(top==-1)
                    return 0;
                if((ch==')' && stack[top]!='(') || (ch==']' && stack[top]!='[') || (ch=='}' && stack[top]!='{')){
                    return 0;
                }
                top--;
            }
        } return (top==-1);
    }
};
