class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<=nums[0])
            return 0;
        int len=nums.size();
        for(int i=1;i<len;i++){
            if(target==nums[i]){
                return i;
            }
            if(target>nums[i-1]&&target<nums[i]){
                return i;
            }
        }
        return len;
    }
};
