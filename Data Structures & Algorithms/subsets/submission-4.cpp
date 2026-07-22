class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> solution;
        int i = 0;
        backtrack(nums,output,solution,i);

        return output;

    }

    void backtrack(const vector<int>& nums, vector<vector<int>>& output, vector<int>&solution, int i){
        if(i == nums.size()){
            output.push_back(solution);
            return;
        }


        solution.push_back(nums[i]);
        backtrack(nums,output,solution,i+1);
        solution.pop_back();
        backtrack(nums,output,solution,i+1);
        
    }
};
