class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int index1 = 0;
        int index2 = numbers.size()-1;

        while (index1 < index2){
            int currSum = numbers[index1] + numbers[index2];
            if(target < currSum){
                index2--;
            }
            if (target > currSum){
                index1++;
            }
            if(target == currSum){
                result.push_back(index1+1);
                result.push_back(index2+1);
                return result;
            }
        }


        }


        
    
};
