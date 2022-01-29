/*
747. 至少是其他数字两倍的最大数
*/
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxn = nums[0], loc = 0;
        for (int i = 1; i < nums.size(); i ++)
        {
            if(nums[i] > maxn)
            {
                maxn = nums[i];
                loc = i;
            }
        }
        for (int i = 0; i < nums.size(); i ++)
            if (maxn < 2 * nums[i] && i != loc) return -1;

        return loc;
    }
};