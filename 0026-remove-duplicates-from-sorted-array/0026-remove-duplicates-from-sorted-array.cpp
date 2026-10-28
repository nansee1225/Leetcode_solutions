class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int i=1;
        int j=1;
        for(i=i;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
              nums[j]=nums[i];
              j++;
            }
         
        }
        return j;
    }
};