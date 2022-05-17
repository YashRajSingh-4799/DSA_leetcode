class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
         // corner case
    if (nums.size() == 0)
        return -1;

    // binary search
    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi)
    {
        // mid pointer
        int mid = lo + (hi - lo) / 2;

        // if target is found at mid
        if (nums[mid] == target)
            return mid;

        // if target is less than mid, lo will be incremented
        else if (nums[mid] < target)
            lo = mid + 1;

        // if target is greater than mid, hi will be decremented
        else
            hi = mid - 1;
    }

    // else
    return -1;    
    }
};