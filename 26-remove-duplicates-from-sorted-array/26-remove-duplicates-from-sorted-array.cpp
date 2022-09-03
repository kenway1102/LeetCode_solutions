class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            vector<int> ans;
            int curr = nums[0];
            ans.push_back(nums[0]);
            
            for(auto itr : nums)
            {
                    if(curr == itr)
                            continue;
                    else
                    {
                            ans.push_back(itr);
                            curr = itr;
                    }      
            }
            
            nums.clear();
            nums = ans;
            
            return ans.size();
    }
};