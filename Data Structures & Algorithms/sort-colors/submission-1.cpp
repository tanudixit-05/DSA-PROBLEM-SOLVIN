class Solution {
public:

    void sortColors(vector<int>& nums) {
                int n  = nums.size();


    for (int i = 0; i < n - 1; i++) {
        int mini = i;

      
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[mini]) {
                mini = j;
            }
        }

        // Swap
        int temp = nums[mini];
        nums[mini] = nums[i];
        nums[i] = temp;
    }
    
    }
};