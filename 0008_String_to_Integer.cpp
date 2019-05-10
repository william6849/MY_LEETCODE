class Solution 
{
public:
    int myAtoi(string str)
    {
        if (str.empty())
        {
            return 0;
        }
        int length = str.size() - 1;
        int sign = 1;
        bool start_tag = false;
        double  sum = 0;

        for (int i = 0; i <= length; i++) 
        {
            if ((str[i] == ' ') || (str[i] == '-') || (str[i] == '+') && (sum == 0) && (!start_tag)) 
            {
                sign = (str[i] == '-') ? -1 : 1;
                if (str[i] != ' ')start_tag = true;
                continue;
            }
            else if ((str[i] < 48) || (str[i]>57) && sum > 0 && start_tag) 
            {
                sum = sum / pow(10,length-i+1);
                break;
            }
            else if ((str[i] < 48) || (str[i]>57) && sum == 0) 
            {
                return 0;
            }
            else if ((str[i] >= 48) || (str[i] <= 57)) 
            {
                sum = sum + (str[i]-'0') * pow(10,length-i);
                start_tag = true;
            }
        }
        sum = sum * sign;
        if (sum >= INT_MAX) 
        { 
            return INT_MAX; 
        }
        if (sum <= INT_MIN)
        {
            return INT_MIN;
        }

        return sum;
    }
};
