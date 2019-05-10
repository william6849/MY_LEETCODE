
class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty()) 
        {
            return "";
        }
        string st = strs.front();//get first string
        int len = strs.size(); //vector nums;
        int times;//min strs length
        int c = INT_MAX;//longest common prefix length
        int same_count = 0;//record longest length of 2 strings

        for (int i=0; i<len; ++i) //loop for find the shortest string of strs
        {
            times = min(st.length(), strs[i].length());
            if (times != st.length()) 
            {
                st = strs[i];
                times = strs[i].length();
            }
        }
        
        for (int j=0; j<len; ++j) // 01 , 02 , 03...compare one by one
        {
            for (int i = 0; i < times; i++) //compare most shortest length of string times
            {
                if (strs[0][i] == strs[j][i]) 
                {
                    same_count++;
                }
                else 
                {
                    break;
                }

            }
            c = min(c, same_count);
            same_count = 0;
        }
        return st.substr(0, c);;
        }
};
