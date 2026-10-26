class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        int longestLength = 0;
       for(int num : nums){
        numSet.insert(num);
       }
       for (int num : numSet){
        if(numSet.find(num - 1) == numSet.end()){
            int current = num;
            int currentLength = 1;
            while(numSet.find(current+1) != numSet.end()){
                current++;
                currentLength++;
               
            }
             longestLength = max(longestLength, currentLength);
        }

       }
     
        return longestLength;
        
    };
};
