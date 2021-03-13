class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = new int[2];
        int l = 0;
        int r = nums.length-1;
        int index = -1;
        int index2 = -1;
        while(l <= r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                index2 = m;
                while(m-1>-1 && nums[m-1] == target)
                    m--;
                while(index2+1<nums.length && nums[index2+1] == target)
                    index2++;
                index = m;
                break;
                
            }
            if(nums[m] > target)
                r = m-1;
            else
                l = m+1;
        }
        res[0] = index;
        res[1] = index2;
        
        return res;
        
    }
}
