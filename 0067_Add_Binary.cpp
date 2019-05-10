class Solution 
{
public:
	string addBinary(string a, string b)
	{
		string ans;
		int carry = 0, i=a.size()-1, j=b.size()-1;
		while ((i>=0) || (j>=0) || (carry>0))
		{
			carry += ((i >= 0) ? (a[i--] - '0') : 0) + ((j >= 0) ? (b[j--] - '0') : 0);
			ans.push_back((carry % 2) + '0');
			carry /= 2;
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
};
