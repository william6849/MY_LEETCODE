class Solution 
{
public:
	string addStrings(string num1, string num2) 
	{
		int carry = 0;
		string ans;
		basic_string<char>::reverse_iterator li1 = num1.rbegin(), li2 = num2.rbegin();

		while (li1 != num1.rend() || li2 != num2.rend() || carry) 
		{
			if (li1 != num1.rend()) 
			{
				carry = carry + ((*li1) - '0');
				li1++;
			}

			if (li2 != num2.rend()) 
			{
				carry = carry + ((*li2) - '0');
				li2++;
			}
			carry = carry;
			ans = to_string(carry % 10) + ans;
			carry /= 10;
		}
		return ans;
	}
};
