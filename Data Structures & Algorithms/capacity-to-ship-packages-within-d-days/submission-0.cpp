class Solution {
public:
int daysreq(vector<int> &wt,int cap ){
    int n = wt.size();
    int days=1,load=0;
    for(int i =0;i<n;i++){
        if(load+wt[i]>cap){
            days+=1;
            load=wt[i];

        }
        else{
            load+=wt[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = low+(high -low)/2;
            int numberofdays=daysreq(weights,mid);
            if(numberofdays<=days){
                high=mid-1;
            }
            else{ 
            low=mid+1;
        }
        }
        return low;
    }
};