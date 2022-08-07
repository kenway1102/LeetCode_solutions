class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int temp = 0;
            
            for(auto i = nums.begin(); i != nums.end(); ++i){
                    if(*i != 0){
                            nums[temp++] = *i;
                    }
            }
            while(temp < nums.size()){
                    nums[temp++] = 0;
            }
    }
};