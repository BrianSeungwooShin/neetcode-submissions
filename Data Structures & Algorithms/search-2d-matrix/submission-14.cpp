class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        for(vector<int>row : matrix){
            int lastElement = row[row.size()-1];

            if(target <= lastElement){
                if(binarySearchHelper(row,0,row.size()-1,target) != -1){
                    return true;
                }
            }
        }

        return false;
    }



    
    
    int binarySearchHelper(vector<int>&nums, int l, int r, int target){
        if(l<=r){
            int mid = l + (r-l)/2;

            if(nums[mid] == target){
                return mid;
            }

            if (target < nums[mid]){
                return binarySearchHelper(nums,l,mid-1,target);
            }

            else{ 
                return binarySearchHelper(nums,mid+1,r,target);
            }

        }

        return -1;
    }


};
