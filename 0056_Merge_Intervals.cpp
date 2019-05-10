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
		return left.start < right.start;
	}


	void generate(vector<Interval>& intervals, vector<Interval>& ans) 
	{
		ans.push_back(intervals[0]);
		for (int i=1; i<intervals.size(); ++i) 
		{
			if (ans.back().end < intervals[i].start)
			{
				ans.push_back(intervals[i]);
			}
			else
			{
				ans.back().end = max(ans.back().end, intervals[i].end);
			}
		}
	}

	vector<Interval> merge(vector<Interval>& intervals) 
	{
		if (intervals.empty())
		{
			return intervals;
		}
		vector<Interval> ans;
		sort(intervals.begin(), intervals.end(), Solution());//3rd parameter of sort to define "<";
		generate(intervals, ans);
		return ans;
	}
};
