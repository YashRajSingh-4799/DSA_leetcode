class Solution
{
    public:
        int longestValidParentheses(string s)
        {
            vector<bool> is_paired(s.size(), false);	//stores if Parentheses is paired or not
            stack<int> st;	//stack(stores index of '(' which is not paired yet)

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(') st.push(i);	// push to stack
                else if (!st.empty()) is_paired[st.top()] = true, is_paired[i] = true, st.pop();	//if pair is found than make is_pair true for both '(' and ')' index.
            }

           	//now simpaly count continuous paired indexes(which is true in is_paired vector) 
            int cur = 0, mx = 0;

            for (int i = 0; i < s.size(); i++)
            {
                if (is_paired[i]) cur++;
                else
                {
                    mx = max(mx, cur);
                    cur = 0;
                }
            }

            if (cur) mx = max(mx, cur);
            return mx;	// return maximum continuous true count from iS_paired vector which is longest valid Parentheses for given string.
        }
};