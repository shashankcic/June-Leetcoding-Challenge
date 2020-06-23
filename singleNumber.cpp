class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        long ans;
        int x,t;
        ans=0;
        int p=0;
        for(int i=0;i<32;i++)
        {
            t=0;
            for(int j=0;j<n;j++)
            {
                x=nums[j]&1;
                t=t+x;
                nums[j]=nums[j]>>1;
            }
            t=t%3;
            ans=ans+t*pow(2,p);
            p++;
        }
        return ans;      
    }
};
