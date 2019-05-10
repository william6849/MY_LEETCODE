class Solution {
public:
	int removeDuplicates(vector<int>& nums) {   //practice iterator.
		if (nums.empty())
		{
			return 0;
		}
		bool count = false;
		int now = *nums.begin();
		auto lt1 = nums.begin();
		for (auto lt2 = lt1 + 1; lt2 != nums.end(); lt2++) 
		{
			//cout << *lt1 << " "<<*lt2<<"  "<< count<<endl;
			if (*lt1 != *lt2) 
			{
				now = *lt1;
				count = false;
				lt1++;
			}
			else if (*lt1 == *lt2 && !count) 
			{
				count = true;
				lt1++;
			}
			else 
			{
				// cout<<"del "<<*lt2<<endl;
				nums.erase(lt2);
				// if(lt2==nums.end())break;
				lt2--;
			}



		}
		return nums.size();
	}
};




/* //clear code , and using index.

class Solution 
{
public:
	int removeDuplicates(vector<int>& nums) 
	{
		int n = nums.size();
		int i = 1;
		bool fill = false;
		while(i < n)
		{
			if(nums[i] == nums[i-1] && !fill)
			{
				fill = true;
				i++;
			}
			else if(nums[i] == nums[i-1] && fill)
			{
				nums.erase(nums.begin() + i);
				n--;
			}
			else
			{
				fill = false;
				i++;
			}
		}
		return nums.size();
	}
};

*/
