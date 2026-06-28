class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(),nums.end());



        for (int i = 0; i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[left] + nums[right] + nums[i];

                if(sum < 0){
                    left++;
                } else if (sum>0){
                    right--;
                } else{
                    vector<int>res;
                    res.push_back(nums[i]);
                    res.push_back(nums[left]);
                    res.push_back(nums[right]);
                    result.push_back(res);
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }

            }


        }
        return result;
    }
};
