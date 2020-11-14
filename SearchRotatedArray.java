class Solution {
    public int binarySearch(int[] arr, int l, int r, int target){
        while(l<=r){
            int m = l+(r-l)/2;
            if(arr[m] == target)
                return m;
            if(arr[m] > target)
                r = m-1;
            else
                l = m+1;
        }
        return -1;
    }
    
    public int search(int[] nums, int target) {
        if(nums.length == 1)
            return nums[0]==target ? 0 : -1;
        int last = nums[0];
        int index = -1;
        for(int i=1;i<nums.length;i++){
            if(nums[i]<last){
                index = i;
                break;
            }
            last = nums[i];
        }
        if(index != -1){
        int ff = binarySearch(nums, 0, index-1, target);
        int ss = binarySearch(nums, index, nums.length-1, target);
        if(ff != -1)
            return ff;
        return ss;
        }
        return binarySearch(nums, 0, nums.length-1, target);

    }
}
