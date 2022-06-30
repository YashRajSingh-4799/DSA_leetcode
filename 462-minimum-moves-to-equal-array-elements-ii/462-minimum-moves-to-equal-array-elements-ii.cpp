class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        int n=ceil(nums.size()/2);
        int c=0;
        for(int i=0;i<nums.size();i++){
            c+=abs(nums[n]-nums[i]);
        }
        return c;
    }
};