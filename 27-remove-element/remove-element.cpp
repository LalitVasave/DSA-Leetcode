class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] == val){
                for(int j = i + 1; j < n; j++){
                    swap(nums[j - 1], nums[j]);
                }
                nums.pop_back(); 
                n--;           
                i--;             
            }
        }
        return n;
    }
};
