class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> s;
        int ans=1;
        for(auto i: nums){
            s.insert(i);
        }
        vector<int> start;
        for(auto i: s){
            if(s.find(i-1)==s.end()) start.push_back(i);
        }

        for(auto i: start){
            for(int j=1; j<nums.size(); j++){
                if(s.find(i+j)!=s.end()) ans=max(ans, j+1);
                else break;
            }
        }
        return ans;
    }
};
