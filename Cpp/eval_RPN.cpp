class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> token_stack;
        for (int i=0; i<tokens.size(); i++)
        {
            if (!tokens[i].compare("+"))
            {
                int int_1 =  token_stack.top();
                token_stack.pop();
                int int_2 =  token_stack.top();
                token_stack.pop();
                token_stack.push(int_1 + int_2);
            }

            else if (!tokens[i].compare("/"))
            {
                int int_1 =  token_stack.top();
                token_stack.pop();
                int int_2 =  token_stack.top();
                token_stack.pop();
                token_stack.push(int_2/int_1);
            }
            else if (!tokens[i].compare("-"))
            {
                int int_1 =  token_stack.top();
                token_stack.pop();
                int int_2 =  token_stack.top();
                token_stack.pop();
                token_stack.push(int_2 - int_1);
            }
            else if (!tokens[i].compare("*"))
            {
                int int_1 =  token_stack.top();
                token_stack.pop();
                int int_2 =  token_stack.top();
                token_stack.pop();
                token_stack.push(int_1*int_2);
            }
            else token_stack.push(stoi(tokens[i]));
        }

        return token_stack.top();
        
    }
};