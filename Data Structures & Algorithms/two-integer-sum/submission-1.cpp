class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          int n = nums.size();
        map<int,int>mpp;//took map 
        for(int i =0;i<n;i++){ //then made a loop by which it will iterate through all elem
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more)!=mpp.end()){//find() map me key search /Agar more mil gaya → uska iterator return karega /Agar nahi mila → mpp.end() return karega
                 return {mpp[more], i};
            }
           mpp[a] = i;//Agar pair nahi mila → current element map me daal do
        }

        return {-1, -1};
    }
};
