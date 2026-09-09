class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxWater=0;
        int l=0;
        int r= height.size()-1;

        while(l<r){

            int water= min(height[l],height[r])*(r-l);

            maxWater=max(maxWater,water);

            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }

        }

        return maxWater;
        

    }
};