class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          int n = nums.size();
    set<vector<int>> st;   // to store unique quadruplets

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {

            unordered_set<int> s;

            for(int k = j+1; k < n; k++) {
                int needed = target - (nums[i] + nums[j] + nums[k]);

                if(s.find(needed) != s.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], needed};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                s.insert(nums[k]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
    
    }
};