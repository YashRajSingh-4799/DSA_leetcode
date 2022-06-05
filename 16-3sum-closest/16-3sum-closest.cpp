class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = nums[0] + nums[1] + nums[2];
    
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size()-2; i++){
        
        if(i > 0 && nums[i] == nums[i-1])
        {
            continue;
        }
        
        int j = i + 1;
        int k = nums.size()-1;
        
        while(j < k){
            
            int newSum = nums[i] + nums[j] + nums[k];
            
            if(abs(target - newSum) < abs(target - closest)){
                closest = newSum;
            }
            
            if(newSum < target){
                j++;
            }
            else if(newSum == target){
                return newSum;
            }
            else{
                k--;
            }
        }
    }
    
    return closest;
    }
};