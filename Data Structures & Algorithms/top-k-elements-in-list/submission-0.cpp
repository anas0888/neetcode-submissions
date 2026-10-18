class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>countMap;
        for (int num : nums){
            countMap[num]++;
        }
        vector<pair<int,int>>freqVector(countMap.begin(),countMap.end());
        sort(freqVector.begin(), freqVector.end(),[](const pair<int,int>&a , const     pair<int,int>&b){
            return a.second> b.second;
        });
        vector <int> result;
        for (int i = 0; i < k; i++){
            result.push_back(freqVector[i].first);
        }
        return result;
    }
};
