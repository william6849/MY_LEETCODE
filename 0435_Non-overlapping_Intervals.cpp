/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution
{
public:

	bool operator() (const Interval& left, const Interval& right) const 
	{
		return (left.start == right.start) ? left.end < right.end : left.start < right.start;
	}


	int generate(vector<Interval>& intervals) 
	{
		int ans = 0;
		int last = 0;
		for (int i = 1; i < intervals.size(); ++i) 
		{
			if (intervals[i].start < intervals[last].end) 
			{
				++ans;
				if (intervals[last].end > intervals[i].end)
				{
					last = i;
				}
			}
			else
			{
				last = i;
			}
		}
		return ans;
	}


	int eraseOverlapIntervals(vector<Interval>& intervals) 
	{
		if (intervals.empty())
		{
			return 0;
		}
		sort(intervals.begin(), intervals.end(), Solution());
		return generate(intervals);
	}
};
