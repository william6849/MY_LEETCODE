class Solution {
public:
    vector<int> hour{1,2,4,8} , minute{1,2,4,8,16,32};

    void readBinaryWatch(pair<int,int> time , vector<string>& ans, int num , int start){     
        if(0 == num)
        {
            return ans.push_back(to_string(time.first) + (time.second<10 ?":0":":") + to_string(time.second)); 
            
        }
        for(int i=start; i<hour.size()+minute.size();i++)
        {
            if(i<hour.size())
            {
                time.first += hour[i];
                if(time.first<12)
                {
                    readBinaryWatch(time,ans,num-1,i+1);
                }
                time.first -= hour[i];
            }
            else
            {
                time.second += minute[i-hour.size()];
                if(time.second<60)
                {
                    readBinaryWatch(time,ans,num-1,i+1);
                }
                time.second -= minute[i-hour.size()];
            }
        }
        
        
    }
    
    vector<string> readBinaryWatch(int num)
    {
        vector<string> ans;
        readBinaryWatch(make_pair(0,0), ans,num, 0);
        return ans;
    }
};
