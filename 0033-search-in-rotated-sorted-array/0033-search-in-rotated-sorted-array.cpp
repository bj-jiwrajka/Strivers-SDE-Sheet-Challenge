class Solution
{
    public:
        int search(vector<int> &nums, int target)
        {
            int n = nums.size();
            int lo = 0, hi = n - 1;
            while (lo < hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] < nums[hi])
                {
                    if (target > nums[mid] and target <= nums[hi])
                        lo = mid + 1;
                    else hi = mid;
                }
                else if (nums[mid] > nums[lo])
                {
                    if (target < nums[mid] and target >= nums[lo])
                        hi = mid - 1;
                    else lo = mid;
                }
               	else if (mid == lo)
               	{  
                    if(nums[mid]==target) return mid;
                    if(nums[hi]==target) return hi;
               	    return -1;
               	}
            }
            return (nums[lo] == target) ? lo : -1;
        }
};