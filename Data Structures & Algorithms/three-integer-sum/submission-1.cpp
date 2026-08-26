class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st ;
        int n = nums.size();

        for(int i =0;i<n;i++){
            unordered_set<int> hash ;
            for(int j = i+1;j<n;j++){
                int third = -(nums[i]+nums[j]);
                if(hash.find(third)!=hash.end()){
                    vector<int> temp ={nums[i],nums[j],third};

                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[j]);
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};
