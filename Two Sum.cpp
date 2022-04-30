class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int sum = 0;
                sum = nums[i] + nums[j];
                if(sum==target)
                {
                    a=i;
                    b = j;
                }
                    
            }
        }
        return {a,b};
    }
};


