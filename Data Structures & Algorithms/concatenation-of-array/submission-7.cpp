class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         vector<int> temp ;
      temp = nums;
      nums.insert(nums.end(), temp.begin(), temp.end());
      return nums;
    }
};