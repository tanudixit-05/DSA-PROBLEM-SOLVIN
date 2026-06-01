class Solution {
public:
     long long calculateTotalHours(vector<int>& piles, long long speed) {
        long long totalH = 0;
        for (int bananas : piles) {
            totalH += ((long long)bananas + speed - 1) / speed;
        }

        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalH = calculateTotalHours(piles, mid);
            if (totalH <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return (int)ans;
    }
};