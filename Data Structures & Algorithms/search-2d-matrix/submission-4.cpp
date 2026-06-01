class Solution {
public:

    int binarySearch(vector<int>&nums, int left, int right, int target){
        if(left<=right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                return binarySearch(nums,left,mid-1,target);
            }
            else { 
                return binarySearch(nums,mid+1,right,target);
            }
        }
        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int>mat : matrix){
            int result = binarySearch(mat, 0, mat.size()-1, target);
            if(result != -1){
                return true;
            }
            
        }

        return false;
        
    }

};
