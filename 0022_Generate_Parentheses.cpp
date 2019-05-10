class Solution 
{
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        if (n == 0) 
        { 
            return ans; 
        }
        backtrack(ans, "", 0, 0, n);
        return ans;
    }

    void backtrack(vector<string>& ans, string now, int left, int right, int max) 
    {
        if (now.length() == max * 2) 
        {
            ans.push_back(now);
            return;
        }
        if (left < max) 
        {
            backtrack(ans, now + "(", left + 1, right, max);
        }
        if (left > right) 
        {
            backtrack(ans, now + ")", left, right + 1, max);
        }
    }
};
