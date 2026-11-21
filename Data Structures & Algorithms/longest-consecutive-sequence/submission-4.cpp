class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> s;
        int ans=1;
        for(auto i: nums){
            s.insert(i);
        }

        for(auto i: s){
            if(s.find(i-1)==s.end()){
                int curr=i, seq=1;
                while(1){
                    if(s.find(curr+1)!=s.end()){
                        ans=max(ans, seq+1);
                        seq++;
                        curr++;
                    }
                    else break;
                }
            }
        }
        return ans;
    }
};
