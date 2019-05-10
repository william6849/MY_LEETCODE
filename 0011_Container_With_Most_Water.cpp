class Solution 
{
public:
    int maxArea(vector<int>& height) {
        int i=0; int j=height.size()-1;
        int ans = 0;
        
        while (i<j)
        {
            int h = min(height[j],height[i]);
            ans = max(ans, (j-i)*h);
            
            while((h >=height[j]) && (i<j))
            {
                j--;
            } //shorter one > longer than height.now;
            while((h >= height[i]) && (i<j))
            {
                i++;
            }
        }
        return ans;
    }
};
