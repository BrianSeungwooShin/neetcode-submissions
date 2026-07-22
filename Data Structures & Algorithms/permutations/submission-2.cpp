class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> solution;
        int i = 0;

        backtrack(nums,output,solution,i);
        return output;
    }

    void backtrack(const vector<int>& nums, vector<vector<int>>& output, vector<int>& solution, int i){
        if(i == nums.size()){
            output.push_back(solution);
            return;
        }

        for(const auto& num : nums){
            if(find(solution.begin(),solution.end(),num) != solution.end()){
                continue;
            }

            solution.push_back(num);

            backtrack(nums,output,solution,i+1);

            solution.pop_back();
        }
    }
};
