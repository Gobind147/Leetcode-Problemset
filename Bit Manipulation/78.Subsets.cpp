//medium
//Given an integer array nums of unique elements, return all possible subsets (the power set).
//The solution set must not contain duplicate subsets. Return the solution in any order.
//Example 1:
//Input: nums = [1,2,3]
//Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
//Example 2:
//Input: nums = [0]
//Output: [[],[0]]
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                if((1<<j)&i)
                    v.push_back(nums[j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
