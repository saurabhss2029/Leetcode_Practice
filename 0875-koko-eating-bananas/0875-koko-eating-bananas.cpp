class Solution {
public:
    int max(vector<int>&piles){
        int maxi = INT_MIN;
        for(int i =0;i<piles.size();i++){
            if(piles[i]>maxi){
                maxi = piles[i];
            }
        }
        return maxi;
    }
    double hours(vector<int>&piles,int h){
        double hour =0;
        for(int  i =0;i<piles.size();i++){
            hour = hour + ceil((double)piles[i]/(double)h);
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1; int high = max(piles);
        while(low<=high){
            int mid = low + (high - low)/2;
            if(hours(piles,mid)<=h){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
            //ans = mid;  
        }
        //cout<<low;
        return low;
    }
};