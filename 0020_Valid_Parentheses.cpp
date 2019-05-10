class Solution 
{
public:
    bool isValid(string s) 
    {
        if (s.empty()) 
        { 
            return true; 
        }
        stack<char> st;
        for (char i : s) 
        {
            if (i == '(' || i == '{' || i == '[') 
            { 
                st.push(i); 
            }
            switch (i) 
            {
            case ')':
                if (st.empty()) 
                { 
                    return false; 
                }
                else if (st.top() == '(')
                {
                    st.pop();
                }
                else 
                { 
                    return false; 
                }
                break;
            case ']':
                if (st.empty()) 
                { 
                    return false; 
                }
                else if (st.top() == '[') 
                { 
                    st.pop(); 
                }
                else 
                { 
                    return false; 
                }
                break;
            case '}':
                if (st.empty())return false;
                else if (st.top() == '{') 
                { 
                    st.pop();
                }
                else 
                { 
                    return false; 
                }
                break;
            default:
                break;
            }

        }
        if (st.empty()) 
        { 
            return true; 
        }
        return false;
    }
};
