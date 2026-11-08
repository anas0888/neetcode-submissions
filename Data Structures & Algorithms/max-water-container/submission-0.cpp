class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int left = 0;
        int right = heights.size() - 1;

        while (left < right){
            int width = right - left;
            int currentHeight = min (heights[left], heights[right]);

            int currentArea = width * currentHeight;

            maxArea = max(maxArea, currentArea);

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};
