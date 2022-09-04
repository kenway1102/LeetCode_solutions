class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            vector<int> ans;
            for(auto i : nums){
                    if(i != val)
                            ans.push_back(i);
            }
            nums.clear();
            nums = ans;
            
            return ans.size();
        
    }
};