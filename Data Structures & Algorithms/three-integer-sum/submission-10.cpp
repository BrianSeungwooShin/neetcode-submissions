class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result; 
        sort(nums.begin(),nums.end());

        for (int i = 0; i < nums.size(); i++){
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int l = i+1;
            int r = nums.size()-1;
            
            while(l < r){
                int sum = nums[l] + nums[r] + nums[i];
                if (sum > 0){
                    r--;
                }
                if (sum < 0){
                    l++;
                }
                if (sum == 0){
                    vector<int>sumEnd;
                    sumEnd.push_back(nums[i]);
                    sumEnd.push_back(nums[l]);
                    sumEnd.push_back(nums[r]);
                    result.push_back(sumEnd);
                    l++;
                    
                    while(l < r && nums[l] == nums[l-1]){
                        l++;
                    }
                }
            }

            
        }
        return result;


        
        
    }
    
};
