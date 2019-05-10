class MedianFinder 
{
public:
	/** initialize your data structure here. */
	MedianFinder() 
	{

	}

	void addNum(int num) 
	{
		if (m.empty()) 
		{
			left = right = m.insert(num);
			return;
		}
		m.insert(num);

		if (m.size() & 1) 
		{//odd
			if (num >= *right) 
			{
				left = right;
			}
			else 
			{
				left = --right;
			}
		}
		else 
		{
			if (num >= *right) 
			{
				right++;
			}
			else 
			{
				left--;
			}


		}
	}

	double findMedian() 
	{
		return static_cast<double>(*left + *right) / 2;
	}

private:
	multiset<int> m;
	multiset<int>::iterator left;
	multiset<int>::iterator right;
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */
