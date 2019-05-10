class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.begin()+n-k);
        reverse(nums.begin()+n-k,nums.begin()+n);
        reverse(nums.begin(),nums.end());
    }
};

/*
 *
 *Make an extra copy and then rotate.
 *
 *Start from one element and keep rotating until we have rotated n different elements.
 *
 *Swap the last k elements with the first k elements.
 *
 *Keep swapping two subarrays.
 *
 *
 *
 *
 *
 *
 *
 * */
