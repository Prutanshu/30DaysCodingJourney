class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int b=temp.top();
                temp.pop();
                int a=temp.top();
                temp.pop();
                if(tokens[i]=="+"){
                    temp.push(a+b);
                }
                if(tokens[i]=="-"){
                    temp.push(a-b);
                }
                if(tokens[i]=="*"){
                    temp.push(a*b);
                }
                if(tokens[i]=="/"){
                    temp.push(a/b);
                }
            }
            else{
                int x=stoi(tokens[i]);
                temp.push(x);
            }
        }
        return temp.top();
    }
};