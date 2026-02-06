class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        nums.emplace_back(0);
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0 && nums[i] < nums.size()){
                std::swap(nums[i],nums[nums[i]]);
            }
        }
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
    }
};
