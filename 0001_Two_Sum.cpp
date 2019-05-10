/*  Two_Sum
 *
 *  topic:
 *  hash
 *
 *  Runtime: 12 ms
 *  Memory Usage: 10.3 MB
 * */

class Solution 
{
    public:  
        vector<int> twoSum(vector<int> &numbers, int target)
        {  //Key is the number and value is its index in the vector. 
            map<int, int> hash; 
            vector<int> ans;    
            for(int i=0; i<numbers.size(); ++i) 
            {      
                int now = target-numbers[i];//if now is found in map, return them     
                if(hash.find(now) != hash.end()) 
                {            
                    ans.push_back(hash[now]);           
                    ans.push_back(i);                       
                    return ans;     
                }//number was not found. Put to the map.     
                hash[numbers[i]] = i;   
            }   
            return ans;
        }     
};
