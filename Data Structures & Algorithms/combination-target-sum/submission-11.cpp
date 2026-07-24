class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> output;
        vector<int> solution;

        backtrack(output,nums,solution,0,target,0);

        return output;

        
    }

    void backtrack(vector<vector<int>>& output, vector<int>& nums, vector<int>& solution, int sum, int target, int start){
        if(sum == target){
            output.push_back(solution);
            return;
        }

        for(int i = start; i<nums.size(); i++){
            if(sum+nums[i] > target){
                continue;
            }

            solution.push_back(nums[i]);
            
            backtrack(output,nums,solution,sum+nums[i],target,i);

            solution.pop_back();
        }
    }
};
