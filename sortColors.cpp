class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0,0,0};
        for(int x: nums){
            count[x]++;
        }
        for(int x: count){
            cout<<x<<endl;
        }
        for(int i=0;i<count[0];i++){
            nums[i]=0;
        }
        for(int i=0;i<count[1];i++){
            nums[i+count[0]]=1;
        }
        for(int i=0;i<count[2];i++){
            nums[i+count[0]+count[1]]=2;
        }
    }
};
