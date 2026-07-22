class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> output;
        vector<int> solution;
        int sum = 0;
        int start = 0;

        backtrack(nums,output,solution,target,sum,start);

        return output;
    }

    void backtrack(const vector<int>&nums, vector<vector<int>>&output, vector<int>&solution, int target, int sum, int start){
        if(sum == target){
            output.push_back(solution);
            return;
        }

        for(int i = start; i<nums.size();i++){
            if(sum+nums[i]>target){
                continue;
            }

            solution.push_back(nums[i]);

            backtrack(nums,output,solution,target,sum+nums[i],i);

            solution.pop_back();
        }
    }
};
