class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int left=0;
        int right=height.size()-1;

        while(left<right){
            int wd = right - left;
            int ht = min(height[left],height[right]);
            int area = wd * ht;
            maxWater=max(area,maxWater);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
    }
};